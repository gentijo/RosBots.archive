#ifndef __ROS_APP_H__
#define __ROS_APP_H__


#include "app/ros/microros_app_base.h"
#include "app/platform/esp32_idf_app.h"
#include "app/rtos/freertos_app.h"
#include "interfaces/if_ros_app.h"


class ros_app : public microros_app_base, public if_ros_app {

    public:
        ros_app(){};

        void initialize();
        
        
        void                ROS_init_ok();

        if_RTOS*            get_RTOS() { return m_rtos; }
        if_platform*        get_Platform() { return m_platform; };
        if_microros_app*    get_MicrorosApp() { return this; };


    public: 
        if_platform         *m_platform;
        if_RTOS             *m_rtos;

};


#endif