
#include "ros_app.h"

#include "ros/microros_locomotion_mgr.h"
#include "drivers/maqueen_mbits_drive/maqueen_mbits_drive.h"

if_ros_app* g_ros_app;

extern "C" void app_main() {
    g_ros_app = new ros_app();
    g_ros_app->initialize();
}


void ros_app::initialize() {
    
    printf("\r\nInit Subsystems");

    m_platform = new esp32_idf_app();
    m_rtos = new freertos_app();
 
    m_rtos->init();
    m_platform->init();
    init();
  
    printf("\r\nInit Subsystems Done");

};

void system_timer_callback(rcl_timer_t *timer, int64_t last_call_time)
{
	printf("Timer Callback\n");
};

void ros_app::ROS_init_ok() {
    printf("\r\nROS Init OK\r\n");

    microros_locomotion_mgr *locMgr = new microros_locomotion_mgr();
    auto drive = new maqueen_mbits_drive(g_ros_app->get_Platform());
    locMgr->setDriveController(drive);
    add_ros_subscription(locMgr);

    add_ros_subscription(new microros_timer_mgr(system_timer_callback, 1000));
}



