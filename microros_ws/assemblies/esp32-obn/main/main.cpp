
#include "main.h"

#include "ros/microros_locomotion_mgr.h"
#include "drivers/maqueen_mbits_drive/maqueen_mbits_drive.h"

mros_maqueen_esp32_freertos g_app;

extern "C" void app_main() {
    g_app.init();
}


void mros_maqueen_esp32_freertos::init() {
    
    freertos_app::init();
    esp32_idf_app::init();
    microros_app::init(this);


};


void microros_app::ROS_init_ok() {
    printf("\r\nROS Init OK\r\n");

    microros_locomotion_mgr *locMgr = new microros_locomotion_mgr();
    locMgr->setDriveController(new maqueen_mbits_drive((if_platform *)this));
    this->add_ros_subscription(locMgr);
}