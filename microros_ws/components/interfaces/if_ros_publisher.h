#ifndef _IF_ROS_PUBLISHER_H_
#define _IF_ROS_PUBLISHER_H_

#include <stdlib.h>
#include <stdio.h>

#include <rcl/rcl.h>
#include <rclc/rclc.h>

#include "interfaces/if_rtos.h"

class microros_app;

class if_ros_publisher {
    public:
        virtual void attach()=0;
        virtual void release()=0;
        virtual const char* getTopicName()=0;
        virtual bool  isBestEffort();
        virtual const rosidl_message_type_support_t *get_IDL_MessageType() = 0;
}; 


#endif

