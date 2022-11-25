
#ifndef _IF_ROS_APP_H_
#define _IF_ROS_APP_H_

#include <stdint.h>

#include "interfaces/if_rtos.h"
#include "interfaces/if_platform.h"
#include "interfaces/if_microros_app.h"

class if_ros_app{
    
    public:
        virtual void                initialize()=0;

        virtual if_RTOS*            get_RTOS()=0;
        virtual if_platform*        get_Platform()=0;
        virtual if_microros_app*    get_MicrorosApp()=0;
};

extern if_ros_app *g_ros_app;


#endif

