
#include "main.h"

#include "ros/microros_locomotion_mgr.h"
#include "drivers/maqueen_mbits_drive/maqueen_mbits_drive.h"

mros_maqueen_esp32_freertos g_app;

extern "C" void app_main() {
   g_app.initialize();
}


void mros_maqueen_esp32_freertos::initialize() {
    
    printf("\r\nInit Subsystems");
    m_platform = new  esp32_idf_app();
    m_ros_app = new microros_app();
    m_rtos = new  freertos_app();
 
    m_rtos->init();
    m_platform->init();
    m_ros_app->init(m_rtos);

    printf("\r\nInit Subsystems Done");

};


void microros_app::ROS_init_ok() {
    printf("\r\nROS Init OK\r\n");

    microros_locomotion_mgr *locMgr = new microros_locomotion_mgr();
    auto drive = new maqueen_mbits_drive(g_app.m_platform);
    printf("\r\n\nROS Main Loc Mgr %p, Drive Control %p, Main class %p", locMgr, drive, this );

    locMgr->setDriveController(drive);
    this->add_ros_subscription(locMgr);
}