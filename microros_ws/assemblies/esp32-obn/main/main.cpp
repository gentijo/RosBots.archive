
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

    microros_locomotion_mgr locMgr;
    maqueen_mbits_drive     driveCtrl(this);
    locMgr.setDriveController(&driveCtrl);
    this->add_ros_subscription(&locMgr);
};