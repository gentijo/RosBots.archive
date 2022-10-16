#ifndef __MICROROS_APP__
#define __MICROROS_APP__

#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>


#include "interfaces/if_ros_subscription.h"
#include "interfaces/if_rtos.h"

#include "ros/microros_timer_mgr.h"

#ifdef CONFIG_MICRO_ROS_ESP_XRCE_DDS_MIDDLEWARE
#include <rmw_microros/rmw_microros.h>
#endif


#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %s %d. Aborting.\n",__LINE__, __FILE__, (int)temp_rc);}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Continuing.\n",__LINE__,(int)temp_rc);}}

class microros_app {

    public:
        microros_app();

        void init(if_RTOS* rtos);
        

        #define MAX_SUBSCRIPTIONS 30
        void                add_ros_subscription(if_ros_subscription* sub);

        
        rcl_allocator_t*    get_ROS_Allocator();
        rclc_support_t*     get_ROS_Support();
        rcl_init_options_t* get_ROS_InitOptions();
        rcl_node_t*         get_ROS_Node();
        rclc_executor_t*    get_ROS_Executor();
        char*               get_Node_Namespace();
        char*               get_Node_Name();


        uint8_t m_domain_id = 0;
        char    m_namespace[26] = "";
        char    m_name[26] = "topcam";
        
        if_ros_subscription* subscriptions[MAX_SUBSCRIPTIONS];
        int subscriptions_index = 0;

        rcl_allocator_t     m_allocator;
        rclc_support_t      m_support;
        rcl_init_options_t  m_init_options;
        rcl_node_t          m_node;
        rclc_executor_t     m_executor;
        
    private:
        microros_timer_mgr  m_TimerMgr;

        static microros_app *s_uros_app;
        static if_RTOS      *s_rtos;
        
        static void microros_task(void * arg);
	    static void sub_velocity_callback(const void *msgin);


};

#endif
