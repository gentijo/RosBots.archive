#include "stdio.h"

#include "app/app_os/microros_app.h"
#inclide "interfaces/"



microros_app*	microros_timer_mgr::s_uros_app = NULL;
if_RTOS*		microros_timer_mgr::s_rtos = NULL;  

microros_timer_mgr::microros_timer_mgr() {};

void microros_timer_mgr::begin(microros_app* uros_app, if_RTOS *rtos)
{
	microros_timer_mgr::s_uros_app = uros_app;
	s_rtos = rtos;

	printf("\r\nattaching Joystick Manager");
};


void microros_timer_mgr::shutdown()
{
};


