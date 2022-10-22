#include "microros_app.h"

microros_app*	microros_app::s_uros_app = NULL;
if_RTOS*		microros_app::s_rtos = NULL;


void microros_app::init(if_RTOS *rtos) {

	s_rtos = rtos;

	s_rtos->create_task( 
		microros_app::microros_task, "microros_task", 
		CONFIG_MICRO_ROS_APP_STACK, NULL, 
		CONFIG_MICRO_ROS_APP_TASK_PRIO, NULL);		

}


void microros_app::add_ros_subscription(if_ros_subscription* sub) {
	
	if (microros_app::s_uros_app->subscriptions_index < MAX_SUBSCRIPTIONS)
	{
		microros_app::s_uros_app->subscriptions[microros_app::s_uros_app->subscriptions_index++] = sub;
		sub->attach(microros_app::s_uros_app, s_rtos);
	}
}

rcl_allocator_t* microros_app::get_ROS_Allocator() {
		return &microros_app::s_uros_app->m_allocator;
}
        
rclc_support_t* microros_app::get_ROS_Support() {
	return &microros_app::s_uros_app->m_support;
}

rcl_init_options_t* microros_app::get_ROS_InitOptions() {
	return &microros_app::s_uros_app->m_init_options;
} 

rcl_node_t*  microros_app::get_ROS_Node() {
	return &microros_app::s_uros_app->m_node;
}

rclc_executor_t* microros_app::get_ROS_Executor(){
	return &microros_app::s_uros_app->m_executor;
}

char* microros_app::get_Node_Name(){
	return microros_app::s_uros_app->m_name;
}

char* microros_app::get_Node_Namespace(){
	return microros_app::s_uros_app->m_namespace;
}


void microros_app::microros_task(void * arg)
{
	microros_app::s_uros_app->m_allocator = rcl_get_default_allocator();
	
	// Create init_options.
    printf("\r\nInitializing the system");
    microros_app::s_uros_app->m_init_options = rcl_get_zero_initialized_init_options();


	RCCHECK(rcl_init_options_init(
		&microros_app::s_uros_app->m_init_options, 
		microros_app::s_uros_app->m_allocator));

	RCCHECK(rcl_init_options_set_domain_id(
		&microros_app::s_uros_app->m_init_options, 
		microros_app::s_uros_app->m_domain_id));

#ifdef CONFIG_MICRO_ROS_ESP_XRCE_DDS_MIDDLEWARE
	rmw_init_options_t* rmw_options = rcl_init_options_get_rmw_init_options(&microros_app::s_uros_app->m_init_options);

	// Static Agent IP and port can be used instead of autodisvery.
	RCCHECK(rmw_uros_options_set_udp_address(CONFIG_MICRO_ROS_AGENT_IP, CONFIG_MICRO_ROS_AGENT_PORT, rmw_options));
	//RCCHECK(rmw_uros_discover_agent(rmw_options));
#endif

    printf("\r\nInit RCLC\r\n");
	// Setup support structure.
	RCCHECK(rclc_support_init_with_options(
		&microros_app::s_uros_app->m_support, 0, NULL, 
		&microros_app::s_uros_app->m_init_options, 
		&microros_app::s_uros_app->m_allocator));

    printf("Node Init\r\n");
    RCCHECK(rclc_node_init_default(
		&microros_app::s_uros_app->m_node, 
		microros_app::s_uros_app->m_name, 
		microros_app::s_uros_app->m_namespace , 
		&microros_app::s_uros_app->m_support));
   
    printf("Executor Init\r\n");
    RCCHECK(rclc_executor_init(
		&microros_app::s_uros_app->m_executor, 
		&microros_app::s_uros_app->m_support.context, 2, 
		&microros_app::s_uros_app->m_allocator));

	microros_app::s_uros_app->add_ros_subscription(&microros_app::s_uros_app->m_TimerMgr);

	microros_app::s_uros_app->ROS_init_ok();
 
    // Spin forever
	while(1){
		rclc_executor_spin_some(&microros_app::s_uros_app->m_executor, RCL_MS_TO_NS(100));
		usleep(100000);
	}

    RCCHECK(rcl_node_fini(&microros_app::s_uros_app->m_node));
    
};

