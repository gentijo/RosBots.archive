
#include "components/locomotion_mgr/locomotion_mgr.h"

locomotion_mgr* c_loc_mgr;


void sub_velocity_callback(const void *msgin)
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
			xQueueSend( this->m_locomotionCmdQueue, ( void * ) &cmd, ( TickType_t ) 0 );
		}

		if (vel->linear.x != 0)
		{
			if (vel->linear.x > 0) cmd.direction = forward;
			else cmd.direction = backward;
			cmd.duration = abs(vel->linear.x) * 100;
			cmd.speed = 50;
			xQueueSend( this->m_locomotionCmdQueue, ( void * ) &cmd, ( TickType_t ) 0 );
		}
	}

}




extern "C" void locomotion_drive_task(void * arg)
{
	while(1) {
		
		struct LocomotionCmd  cmd;
		if (xQueueReceive( locomotionCmdQueue, ( void * ) &cmd, ( TickType_t ) 500 / portTICK_PERIOD_MS)) {

			//printf("Receied locomotion cmd dir:%d dur:%d speed:%d", cmd.direction, cmd.duration, cmd.speed);


			switch (cmd.direction) {
				case right:
				//	printf("turn right\r\n");
					c_loc_mgr->getDrive()->drive_turnRight(cmd.speed);
					break;

				case left:				
				//	printf("turn left\r\n");
					c_loc_mgr->getDrive()->drive_turnLeft(cmd.speed);
					break;

				case forward:
					// printf("turn forward\r\n");
					c_loc_mgr->getDrive()->drive_forward(cmd.speed);
					break;

				case backward:
					//printf("turn backward\r\n");
					c_loc_mgr->getDrive()->drive_backward(cmd.speed);
					break;
			}

			while(cmd.duration > 0) {
				usleep(1000);
				cmd.duration--;
			}
		}
		else {		
			//printf("Motor stop\n\r");
			c_loc_mgr->getDrive()->drive_stop();
			usleep(100000);

			int dist =  c_loc_mgr->getDrive()->drive_readDistance();
			int speed = c_loc_mgr->getDrive()->drive_readSpeed();
			int dir =   c_loc_mgr->getDrive()->drive_readDirection();

			printf("Distance %d  Speed %d  Dir %d\r\n", dist, speed, dir);

		}
	}


	locomotion_mgr::locomotion_mgr() {
		c_loc_mgr = this;
	}

	void locomotion_mgr::setDriveController(locomotion_drive_iface *driveCtrl) {
		this->driveCtrl = driveCtrl;
	}

	void locomotion_mgr::attach(microros_app *app)
	{
		this->m_app = app;

		this->locomotionCmdQueue = xQueueCreate( 10, sizeof( struct LocomotionCmd ) );

		xTaskCreate(locomotion_drive_task,
			"locomotion_drive_task",
			CONFIG_MICRO_ROS_APP_STACK,
			NULL,
			CONFIG_MICRO_ROS_APP_TASK_PRIO,
			NULL);

		printf("Registering command velocity subscription\r\n");

		RCCHECK(rclc_subscription_init_default(
			&this->m_velocity_subscription,
			this->m_app->get_ROS_Node(),
			ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
			this->m_app->get_Node_Name()+"/cmd_vel"));

		RCCHECK(rclc_executor_add_subscription(
			this->m_app->get_ROS_Executor(), 
			&this->velocity_subscription, 
			&this->velocity_msg, 
			&sub_velocity_callback, ON_NEW_DATA));

	}

	void locomotion_mgr::release()
	{
		// Free resources.
		RCCHECK(rcl_subscription_fini(&this->m_velocity_subscription, this->m_app->get_ROS_Node()));
	}

}