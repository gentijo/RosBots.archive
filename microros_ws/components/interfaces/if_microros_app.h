
#ifndef __IF_MICROROS_APP_H_
#define __IF_MICROROS_APP_H_

#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include "interfaces/if_I2C_driver.h"
#include "interfaces/if_platform.h"
#include "interfaces/if_ros_subscription.h"

class if_microros_app {
    
    public:
        virtual void                init(if_RTOS* rtos)=0;
        virtual void                add_ros_subscription(if_ros_subscription* sub)=0;
        virtual rcl_allocator_t*    get_ROS_Allocator()=0;
        virtual rclc_support_t*     get_ROS_Support()=0;
        virtual rcl_init_options_t* get_ROS_InitOptions()=0;
        virtual rcl_node_t*         get_ROS_Node()=0;
        virtual rclc_executor_t*    get_ROS_Executor()=0;
        virtual char*               get_Node_Namespace()=0;
        virtual char*               get_Node_Name()=0;
  
        virtual void                ROS_init_ok()=0;

        
};


#endif

