#include "stdio.h"

#include "app/app_os/microros_app.h"
#include "ros/microros_timer_mgr.h"
#include "ros/microros_timer_task.h"



microros_app*	microros_timer_mgr::s_uros_app = NULL;
if_RTOS*		microros_timer_mgr::s_rtos = NULL;  

microros_timer_mgr::microros_timer_mgr() {};

void microros_timer_mgr::attach(microros_app* uros_app, if_RTOS *rtos)
{
	microros_timer_mgr::s_uros_app = uros_app;
	s_rtos = rtos;

	printf("\r\nattaching Timer Manager");

	this->m_timer = rcl_get_zero_initialized_timer();
	RCCHECK(rclc_timer_init_default(
		&this->m_timer,
		microros_timer_mgr::s_uros_app->get_ROS_Support(),
		RCL_MS_TO_NS(this->m_timer_timeout),
		microros_timer_mgr::timer_callback)
	);

	
	RCCHECK(rclc_executor_set_timeout(
		microros_timer_mgr::s_uros_app->get_ROS_Executor(), 
		RCL_MS_TO_NS(this->m_rcl_wait_timeout)));

	// Add timer and subscriber to executor.
	RCCHECK(rclc_executor_add_timer(
		microros_timer_mgr::s_uros_app->get_ROS_Executor(), 
		&this->m_timer));
};


void microros_timer_mgr::release()
{
	//RCCHECK(rcl_subscription_fini(&velocity_subscription, node));
};


void microros_timer_mgr::timer_callback(rcl_timer_t *timer, int64_t last_call_time)
{
	printf("Timer Callback\n");
};

