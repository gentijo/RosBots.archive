#ifndef _IF_ROS_PUBLISHER_H_
#define _IF_ROS_PUBLISHER_H_

#include <stdlib.h>
#include <stdio.h>

#include "interfaces/if_rtos.h"

class microros_app;

class if_ros_publisher {
    public:
        virtual void begin()=0;
        virtual void shutdown()=0;
}; 


#endif

