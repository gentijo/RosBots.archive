#include "microros_app.h"


microros_app::microros_app() {
}

void microros_app::init()
{
    m_allocator = rcl_get_default_allocator();
	

	// Create init_options.
    printf("Initializing the system");
    m_init_options = rcl_get_zero_initialized_init_options();
	RCCHECK(rcl_init_options_init(&m_init_options, m_allocator));
	RCCHECK(rcl_init_options_set_domain_id(&m_init_options, m_domain_id));

#ifdef CONFIG_MICRO_ROS_ESP_XRCE_DDS_MIDDLEWARE
	rmw_init_options_t* rmw_options = rcl_init_options_get_rmw_init_options(&m_init_options);

	// Static Agent IP and port can be used instead of autodisvery.
	RCCHECK(rmw_uros_options_set_udp_address(CONFIG_MICRO_ROS_AGENT_IP, CONFIG_MICRO_ROS_AGENT_PORT, rmw_options));
	//RCCHECK(rmw_uros_discover_agent(rmw_options));
#endif

    printf("Init RCLC\r\n");
	// Setup support structure.
	RCCHECK(rclc_support_init_with_options(&m_support, 0, NULL, &m_init_options, &m_allocator));



    RCCHECK(rclc_node_init_default(&m_node, m_name, m_namespace , &m_support));
    printf("Node Init\r\n");

    RCCHECK(rclc_executor_init(&m_executor, &m_support.context, 2, &m_allocator));
    printf("Executor Init\r\n");
    
    printf("Init I2C subsystem\r\n");
    m_i2c_driver_host.initialize(0, true);

    // printf("Init Timer Subscription\r\n");
    // register_timer_subscription(&support, &node, &executor);

  
    // Spin forever
	while(1){
		rclc_executor_spin_some(&m_executor, RCL_MS_TO_NS(100));
		usleep(100000);
	}

    RCCHECK(rcl_node_fini(&m_node));
}
