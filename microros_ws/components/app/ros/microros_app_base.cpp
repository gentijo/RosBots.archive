
#include "microros_app_base.h"


void microros_app_base::init() {

	g_ros_app->get_RTOS()->create_task( 
		microros_app_base::static_microros_app_task, "microros_task", 
		CONFIG_MICRO_ROS_APP_STACK, NULL, 
		CONFIG_MICRO_ROS_APP_TASK_PRIO, NULL);		

}


void microros_app_base::add_ros_subscription(if_ros_subscription* sub) {
	
	if (m_subscriptions_index < MAX_SUBSCRIPTIONS)
	{
		m_subscriptions[m_subscriptions_index++] = sub;
		sub->attach();
	}
}

rcl_publisher_t* microros_app_base::createPublisherForTopic(const char * topic_name, const rosidl_message_type_support_t * type_support, bool bestEffort) {

	// Publisher object
	rcl_publisher_t* publisher = new rcl_publisher_t();

	if (m_publishers.find(topic_name) == m_publishers.end())
    {
    	m_publishers[topic_name] = publisher;
    }
	else
	{
		printf("Topic already defined, reusing");
		return m_publishers[topic_name];
	}

	rcl_ret_t rc; 
	if (bestEffort) {
		// Creates a best effort rcl publisher
		rc = rclc_publisher_init_best_effort(
  		publisher, &m_node,
  		type_support, topic_name);

	} else {
		// Creates a reliable rcl publisher
		rc = rclc_publisher_init_default(
  			publisher, &m_node,
  			type_support, topic_name);

	}

	if (RCL_RET_OK != rc) {
  		// Handle error
		// TODO: Handle Error 
  		return NULL;
	}

	return publisher;
}

void microros_app_base::publishMessage(const char * topic_name, const void * message) {
	
	publisherIter pubIter = m_publishers.find(topic_name);

 	if (pubIter == m_publishers.end())
    {
		printf("Could not find Topic");
		return;
    }

	rcl_publisher_t* publisher = pubIter->second;
	publishMessage(publisher, message);
}

void microros_app_base::publishMessage(rcl_publisher_t* publisher, const void * message) {
	
	// Publish message
	rcl_ret_t rc = rcl_publish(publisher, message, NULL);

	//TODO: handle Error
	// if (rc != RCL_RET_OK) {
	// 	// Handle error
  	// 	return -1;
	// }

}

//
// Static Member Function, used as entrypoint for FreeRTOS task call.
//
void microros_app_base::static_microros_app_task(void * arg)
{
	g_ros_app->get_MicrorosApp()->microros_app_task(arg);
}

void microros_app_base::microros_app_task(void * arg) {

	m_allocator = rcl_get_default_allocator();
	
	// Create init_options.
    printf("\r\nInitializing the system");
    m_init_options = rcl_get_zero_initialized_init_options();


	RCCHECK(rcl_init_options_init(
		&m_init_options, m_allocator));

	RCCHECK(rcl_init_options_set_domain_id(
		&m_init_options, m_domain_id));

#ifdef CONFIG_MICRO_ROS_ESP_XRCE_DDS_MIDDLEWARE
	rmw_init_options_t* rmw_options = rcl_init_options_get_rmw_init_options(&m_init_options);

	// Static Agent IP and port can be used instead of autodisvery.
	RCCHECK(rmw_uros_options_set_udp_address(CONFIG_MICRO_ROS_AGENT_IP, CONFIG_MICRO_ROS_AGENT_PORT, rmw_options));
	//RCCHECK(rmw_uros_discover_agent(rmw_options));
#endif

    printf("\r\nInit RCLC\r\n");
	// Setup support structure.
	RCCHECK(rclc_support_init_with_options(
		&m_support, 0, NULL, 
		&m_init_options, 
		&m_allocator));

    printf("Node Init\r\n");
    RCCHECK(rclc_node_init_default(
		&m_node, 
		m_name, 
		m_namespace , 
		&m_support));
   
    printf("Executor Init\r\n");
    RCCHECK(rclc_executor_init(
		&m_executor, 
		&m_support.context, 2, 
		&m_allocator));

	
	RCCHECK(rclc_executor_set_timeout(
		get_ROS_Executor(), 
		RCL_MS_TO_NS(m_rcl_wait_timeout)));

	ROS_init_ok();
 
    // Spin forever
	while(1){
		rclc_executor_spin_some(&m_executor, RCL_MS_TO_NS(100));
		usleep(1000);
	}

    RCCHECK(rcl_node_fini(&m_node));
    
};

