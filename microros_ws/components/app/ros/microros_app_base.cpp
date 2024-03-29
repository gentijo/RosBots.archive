
#include "microros_app_base.h"


void microros_app_base::init() {

	printf("\r\nMicroRos App Base Init");

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

rcl_publisher_t* microros_app_base::add_ros_publisher(if_ros_publisher* pub) {

	// Publisher object
	rcl_publisher_t* rcl_publisher = new rcl_publisher_t();

	const char* topic_name = pub->getTopicName();
	if (m_publishers.find(topic_name) == m_publishers.end())
    {
     	m_publishers[topic_name] = rcl_publisher;
    }
	else
	{
		printf("Topic already defined, reusing");
	 	return m_publishers[topic_name];
	}

	const rosidl_message_type_support_t *type_support = pub->get_IDL_MessageType();

	rcl_ret_t rc; 
	if (pub->isBestEffort()) {
		// Creates a best effort rcl publisher
		rc = rclc_publisher_init_best_effort(
  			rcl_publisher, &m_node,
  			type_support, topic_name);

	} else {
	 	// Creates a reliable rcl publisher
		rc = rclc_publisher_init_default(
  			rcl_publisher, &m_node,
  			type_support, topic_name);

	}

	if (RCL_RET_OK != rc) {
  		// Handle error
		// TODO: Handle Error 
  		return NULL;
	}

	pub->attach();

	return rcl_publisher;

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
	rcl_ret_t rc;

	m_allocator = rcl_get_default_allocator();
	
	// Create init_options.
    printf("\r\nInitializing the system");
    m_init_options = rcl_get_zero_initialized_init_options();


	rc = rcl_init_options_init(
		&m_init_options, 
		m_allocator);

	if (rc != RCL_RET_OK) {
		printf("ROS Failed status on line %d: %s %d. Aborting.\n",__LINE__, __FILE__, (int)rc);
		return;
	}

	rc = rcl_init_options_set_domain_id(
		&m_init_options, m_domain_id);
	if (rc != RCL_RET_OK) {
		printf("ROS Failed status on line %d: %s %d. Aborting.\n",__LINE__, __FILE__, (int)rc);
		return;
	}


#ifdef CONFIG_MICRO_ROS_ESP_XRCE_DDS_MIDDLEWARE
	rmw_init_options_t* rmw_options = rcl_init_options_get_rmw_init_options(&m_init_options);

	// Static Agent IP and port can be used instead of autodisvery.
	RCCHECK(rmw_uros_options_set_udp_address(CONFIG_MICRO_ROS_AGENT_IP, CONFIG_MICRO_ROS_AGENT_PORT, rmw_options));
	//RCCHECK(rmw_uros_discover_agent(rmw_options));
#endif

	printf("\r\nInit RCLC\r\n");

	// Setup support structure.
	rc = rclc_support_init_with_options(
		&m_support, 0, NULL, 
		&m_init_options, 
		&m_allocator);

	if (rc != RCL_RET_OK) {
		printf("ROS Failed status on line %d: %s %d. Aborting.\n",__LINE__, __FILE__, (int)rc);
		return;
	}


    printf("Node Init\r\n");
    rc = rclc_node_init_default(
		&m_node, 
		m_name, 
		m_namespace , 
		&m_support);

	if (rc != RCL_RET_OK) {
		printf("ROS Failed status on line %d: %s %d. Aborting.\n",__LINE__, __FILE__, (int)rc);
		return;
	}
   
    printf("Executor Init\r\n");
    rc = rclc_executor_init(
		&m_executor, 
		&m_support.context, 2, 
		&m_allocator);

	if (rc != RCL_RET_OK) {
		printf("ROS Failed status on line %d: %s %d. Aborting.\n",__LINE__, __FILE__, (int)rc);
		return;
	}

	
	rc = rclc_executor_set_timeout(
		get_ROS_Executor(), 
		RCL_MS_TO_NS(m_rcl_wait_timeout));

	if (rc != RCL_RET_OK) {
		printf("ROS Failed status on line %d: %s %d. Aborting.\n",__LINE__, __FILE__, (int)rc);
		return;
	}

	ROS_init_ok();
 
    // Spin forever
	while(1){
		rclc_executor_spin_some(&m_executor, RCL_MS_TO_NS(100));
        vTaskDelay( 1000 / portTICK_PERIOD_MS );
	}

    rc = rcl_node_fini(&m_node);
    
	if (rc != RCL_RET_OK) {
		printf("ROS Failed status on line %d: %s %d. Aborting.\n",__LINE__, __FILE__, (int)rc);
		return;
	}

};

