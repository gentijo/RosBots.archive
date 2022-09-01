#include "stdio.h"
#include "components/microros_timer_mgr/microros_timer_mgr.h"
#include "components/microros_timer_mgr/timer_task.h"


void timer_callback(rcl_timer_t *timer, int64_t last_call_time)
{
	printf("Timer Callback\n");
};

//void ros_timer_mgr::addTimerTask

microros_timer_mgr::microros_timer_mgr() {};

void microros_timer_mgr::attach(microros_app* app)
{
	this->m_app = app;

	printf("\r\nattaching Timer Manager");

	this->m_timer = rcl_get_zero_initialized_timer();
	RCCHECK(rclc_timer_init_default(
		&this->m_timer,
		this->m_app->get_ROS_Support(),
		RCL_MS_TO_NS(this->m_timer_timeout),
		timer_callback));

	
	RCCHECK(rclc_executor_set_timeout(this->m_app->get_ROS_Executor(), RCL_MS_TO_NS(this->m_rcl_wait_timeout)));

	// Add timer and subscriber to executor.
	RCCHECK(rclc_executor_add_timer(this->m_app->get_ROS_Executor(), &this->m_timer));
};


void microros_timer_mgr::release()
{
	//RCCHECK(rcl_subscription_fini(&velocity_subscription, node));
};



