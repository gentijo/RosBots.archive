#ifndef __MICROROS_APP__
#define __MICROROS_APP__

#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <unordered_map>
#include <string>

#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include "interfaces/if_ros_subscription.h"
#include "interfaces/if_rtos.h"
#include "interfaces/if_microros_app.h"
#include "interfaces/if_ros_app.h"

#include "ros/microros_timer_mgr.h"

#ifdef CONFIG_MICRO_ROS_ESP_XRCE_DDS_MIDDLEWARE
#include <rmw_microros/rmw_microros.h>
#endif

#define MAX_SUBSCRIPTIONS 30

class microros_app_base : public if_microros_app {

    protected:
        microros_app_base() {}
        virtual void        ROS_init_ok()=0;

        void                microros_app_task(void * arg);
        static void         static_microros_app_task(void * arg);


    public:
        void                    init();
        void                    add_ros_subscription(if_ros_subscription* sub);

        rcl_allocator_t*        get_ROS_Allocator() {return &m_allocator;};
        rclc_support_t*         get_ROS_Support() {return &m_support;};
        rcl_init_options_t*     get_ROS_InitOptions() {return &m_init_options;}; 
        rcl_node_t*             get_ROS_Node() {return &m_node;};
        rclc_executor_t*        get_ROS_Executor(){return &m_executor;};
        char*                   get_Node_Name(){return m_name;};
        char*                   get_Node_Namespace(){return m_namespace;};


        rcl_publisher_t*    createPublisherForTopic(const char * topic_name, const rosidl_message_type_support_t * type_support, bool bestEffort = false);
        void                publishMessage(const char * topic_name, const void * message);
        void                publishMessage(rcl_publisher_t* publisher, const void * message);

        
    private:        
        uint8_t m_domain_id = 0;
        char    m_namespace[26] = "";
        char    m_name[26] = "turtle1";
        
        unsigned int m_rcl_wait_timeout = 1000;   // in ms


        std::unordered_map<std::string, rcl_publisher_t*> m_publishers;
        typedef std::unordered_map<std::string,rcl_publisher_t* >::const_iterator publisherIter;

        if_ros_subscription*    m_subscriptions[MAX_SUBSCRIPTIONS];
        int                     m_subscriptions_index = 0;

        rcl_allocator_t     m_allocator;
        rclc_support_t      m_support;
        rcl_init_options_t  m_init_options;
        rcl_node_t          m_node;
        rclc_executor_t     m_executor;
};



#endif
