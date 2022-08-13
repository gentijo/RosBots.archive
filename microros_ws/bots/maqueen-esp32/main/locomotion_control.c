#include <stdio.h>
#include <math.h>

#include "microbot.h"

#include "locomotion_control.h"
#include "maqueen_motor.h"

#include "geometry_msgs/msg/twist.h"

void register_velocity_subscription(char *name, rcl_node_t *node, rclc_executor_t *executor);

enum direction_t {
	forward = 1,
	backward = 2,
	right = 3,
	left =4
};

struct LocomotionCmd
 {
    uint8_t direction;
    uint8_t speed;
	uint8_t duration;

 } locomotionCmd_t;

QueueHandle_t locomotionCmdQueue;
  
void locomotion_ctrl_init(char *name, rcl_node_t *node, rclc_support_t *support, rclc_executor_t *executor)
{
	register_velocity_subscription(name, node, executor);

	locomotionCmdQueue = xQueueCreate( 10, sizeof( struct LocomotionCmd ) );

	xTaskCreate(locomotion_drive_task,
         "locomotion_drive_task",
         CONFIG_MICRO_ROS_APP_STACK,
         NULL,
         CONFIG_MICRO_ROS_APP_TASK_PRIO,
         NULL);

}

void sub_velocity_callback(const void * msgin)
{
	const geometry_msgs__msg__Twist *vel = (const geometry_msgs__msg__Twist *)msgin;


	printf("Received: velocity linear [%f %f %f] angular [%f %f %f]\r\n", 
	 vel->linear.x, vel->linear.y,vel->linear.z, 
	 vel->angular.x, vel->angular.y, vel->angular.z);

	// Linear.x will be a +/- value representing forward / backward movement
	// angular.z will be rotation, for turn left or turn right
	// 
	// We will parse out turns first and submit locomotion commands to the pipeline
	// then we will process direction commands to the pipeline.
	//
	// Most velocity commands will only populate a single vector. 
	//
    if( locomotionCmdQueue != 0 )
    {
		struct LocomotionCmd  cmd;
		if (vel->angular.z != 0)
		{
			if (vel->angular.z > 0) cmd.direction = right;
			else cmd.direction = left;
			cmd.duration = abs(vel->angular.z) * 100;
			cmd.speed = 50;
			xQueueSend( locomotionCmdQueue, ( void * ) &cmd, ( TickType_t ) 0 );
		}

		if (vel->linear.x != 0)
		{
			if (vel->linear.x > 0) cmd.direction = forward;
			else cmd.direction = backward;
			cmd.duration = abs(vel->linear.x) * 100;
			cmd.speed = 50;
			xQueueSend( locomotionCmdQueue, ( void * ) &cmd, ( TickType_t ) 0 );
		}
	}

}


rcl_subscription_t velocity_subscription;
geometry_msgs__msg__Twist velocity_msg;

void register_velocity_subscription(char *name, rcl_node_t *node, rclc_executor_t *executor)
{
	printf("Registering command velocity subscription\r\n");
	// Create subscriber.
	RCCHECK(rclc_subscription_init_default(
		&velocity_subscription,
		node,
		ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
		"turtle1/cmd_vel"));

	RCCHECK(rclc_executor_add_subscription(executor, &velocity_subscription, &velocity_msg, &sub_velocity_callback, ON_NEW_DATA));
}

void release_velocity_subscription(rcl_node_t *node)
{
	// Free resources.
	RCCHECK(rcl_subscription_fini(&velocity_subscription, node));
}



void locomotion_drive_task(void * arg)
{
	while(1) {
		
		struct LocomotionCmd  cmd;
		if (xQueueReceive( locomotionCmdQueue, ( void * ) &cmd, ( TickType_t ) 500 / portTICK_PERIOD_MS)) {

			//printf("Receied locomotion cmd dir:%d dur:%d speed:%d", cmd.direction, cmd.duration, cmd.speed);


			switch (cmd.direction) {
				case right:
				//	printf("turn right\r\n");
					maqueen_motor_turnRight(cmd.speed);
					break;

				case left:				
				//	printf("turn left\r\n");
					maqueen_motor_turnLeft(cmd.speed);
					break;

				case forward:
					// printf("turn forward\r\n");
					maqueen_motor_forward(cmd.speed);
					break;

				case backward:
					//printf("turn backward\r\n");
					maqueen_motor_backward(cmd.speed);
					break;
			}

			while(cmd.duration > 0) {
				usleep(1000);
				cmd.duration--;
			}
		}
		else {		
			//printf("Motor stop\n\r");
			maqueen_motor_stop();
			usleep(100000);
		}

	}
}