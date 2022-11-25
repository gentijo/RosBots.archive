#include "stdio.h"

#include "ros/microros_timer_mgr.h"

void microros_timer_mgr::attach()
{
    printf("\r\nAttaching timer");

	m_timer = rcl_get_zero_initialized_timer();
	RCCHECK(rclc_timer_init_default(
		&m_timer,
		g_ros_app->get_MicrorosApp()->get_ROS_Support(),
		RCL_MS_TO_NS(this->m_timer_period),
		m_timer_callback)
	);
	

	// Add timer and subscriber to executor.
	RCCHECK(rclc_executor_add_timer(
		g_ros_app->get_MicrorosApp()->get_ROS_Executor(), 
		&this->m_timer));

    printf("\r\nAttaching timer complete");

};


void microros_timer_mgr::release()
{
};



