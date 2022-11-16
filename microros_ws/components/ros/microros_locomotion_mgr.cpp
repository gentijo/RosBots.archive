
#include "microros_locomotion_mgr.h"


microros_app* 				microros_locomotion_mgr::s_uros_app=NULL;
microros_locomotion_mgr*	microros_locomotion_mgr::s_loc_mgr=NULL;
if_RTOS* 					microros_locomotion_mgr::s_rtos=NULL;




void microros_locomotion_mgr::attach(microros_app *uros_app, if_RTOS *rtos)
{
	microros_locomotion_mgr::s_loc_mgr = this;

	microros_locomotion_mgr::s_uros_app = uros_app;
	microros_locomotion_mgr::s_rtos = rtos;

	microros_locomotion_mgr::s_loc_mgr->m_locomotionCmdQueue = 
	 	microros_locomotion_mgr::s_rtos->queue_create( 10, sizeof( struct LocomotionCmd ) );

	printf("Creating locomotion reader task\r\n");
	microros_locomotion_mgr::s_rtos->create_task(
		microros_locomotion_mgr::locomotion_drive_task,
		"locomotion_drive_task",
		CONFIG_MICRO_ROS_APP_STACK,
		NULL,
		CONFIG_MICRO_ROS_APP_TASK_PRIO,
		NULL);

	char full_name[40] = "";
	strcpy(full_name, microros_locomotion_mgr::s_uros_app->get_Node_Name());
	strcat(full_name, "/cmd_vel");

	printf("Init command velocity subscription Name=%s\r\n", full_name);
	RCCHECK(rclc_subscription_init_default(
	 	&microros_locomotion_mgr::s_loc_mgr->m_velocity_subscription,
		microros_locomotion_mgr::s_uros_app->get_ROS_Node(),
		ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
		full_name)
	);

	printf("Add command velocity subscription\r\n");
	RCCHECK(rclc_executor_add_subscription(
		microros_locomotion_mgr::s_uros_app->get_ROS_Executor(), 
		&microros_locomotion_mgr::s_loc_mgr->m_velocity_subscription, 
		&microros_locomotion_mgr::s_loc_mgr->m_velocity_msg, 
		&microros_locomotion_mgr::sub_velocity_callback, ON_NEW_DATA));

}

void microros_locomotion_mgr::release()
{
	// Free resources.
	RCCHECK(rcl_subscription_fini(&microros_locomotion_mgr::s_loc_mgr->m_velocity_subscription, microros_locomotion_mgr::s_uros_app->get_ROS_Node()));
}


void microros_locomotion_mgr::sub_velocity_callback(const void *msgin)
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
	if( microros_locomotion_mgr::s_loc_mgr->m_locomotionCmdQueue != 0 )
	{
		struct LocomotionCmd  cmd;
		if (vel->angular.z != 0)
		{
			if (vel->angular.z > 0) cmd.direction = right;
			else cmd.direction = left;
			cmd.duration = abs(vel->angular.z) * 100;
			cmd.speed = 50;
			
			microros_locomotion_mgr::s_rtos->queue_send( 
				microros_locomotion_mgr::s_loc_mgr->m_locomotionCmdQueue, 
				( void * ) &cmd, ( TickType_t ) 0 );
		}

		if (vel->linear.x != 0)
		{
			if (vel->linear.x > 0) cmd.direction = forward;
			else cmd.direction = backward;
			cmd.duration = abs(vel->linear.x) * 100;
			cmd.speed = 50;

			microros_locomotion_mgr::s_rtos->queue_send( 
				microros_locomotion_mgr::s_loc_mgr->m_locomotionCmdQueue, 
				( void * ) &cmd, ( TickType_t ) 0 );
		}
	}

}


void microros_locomotion_mgr::locomotion_drive_task(void * arg)
{
	while(1) {

		struct LocomotionCmd cmd;
		if (microros_locomotion_mgr::s_rtos->queue_receive(
			microros_locomotion_mgr::s_loc_mgr->m_locomotionCmdQueue, ( void * ) &cmd, 
			( TickType_t ) 500 / portTICK_PERIOD_MS)) {

			printf("Receied locomotion cmd dir:%d dur:%d speed:%d", cmd.direction, cmd.duration, cmd.speed);


			switch (cmd.direction) {
				case right:
					printf("turn right\r\n");
					microros_locomotion_mgr::s_loc_mgr->getDriveController()->drive_turnRight(cmd.speed);
					break;

				case left:				
					printf("turn left\r\n");
					microros_locomotion_mgr::s_loc_mgr->getDriveController()->drive_turnLeft(cmd.speed);
					break;

				case forward:
					printf("turn forward\r\n");
					microros_locomotion_mgr::s_loc_mgr->getDriveController()->drive_forward(cmd.speed);
					break;

				case backward:
					printf("turn backward\r\n");
					microros_locomotion_mgr::s_loc_mgr->getDriveController()->drive_backward(cmd.speed);
					break;
			}

			while(cmd.duration > 0) {
				usleep(1000);
				cmd.duration--;
			}
		}
		else {		

//			printf("Motor stop 1\n\r");

//			microros_locomotion_mgr::s_loc_mgr->getDriveController()->drive_stop();
			usleep(100000);

//			printf("Motor stop 2\n\r");

			// int dist =  microros_locomotion_mgr::s_loc_mgr->getDriveController()->drive_readDistance();
			// int speed = microros_locomotion_mgr::s_loc_mgr->getDriveController()->drive_readSpeed();
			// int dir =   microros_locomotion_mgr::s_loc_mgr->getDriveController()->drive_readDirection();

			// printf("Distance %d  Speed %d  Dir %d\r\n", dist, speed, dir);

		}
	}

}

