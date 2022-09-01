#include "microros_app.h"


microros_app::microros_app() {
}

void microros_app::init()
{
    m_allocator = rcl_get_default_allocator();
	

	// Create init_options.
    printf("\r\nInitializing the system");
    m_init_options = rcl_get_zero_initialized_init_options();
	RCCHECK(rcl_init_options_init(&m_init_options, m_allocator));
	RCCHECK(rcl_init_options_set_domain_id(&m_init_options, m_domain_id));

#ifdef CONFIG_MICRO_ROS_ESP_XRCE_DDS_MIDDLEWARE
	rmw_init_options_t* rmw_options = rcl_init_options_get_rmw_init_options(&m_init_options);

	// Static Agent IP and port can be used instead of autodisvery.
	RCCHECK(rmw_uros_options_set_udp_address(CONFIG_MICRO_ROS_AGENT_IP, CONFIG_MICRO_ROS_AGENT_PORT, rmw_options));
	//RCCHECK(rmw_uros_discover_agent(rmw_options));
#endif

    printf("\r\nInit RCLC\r\n");
	// Setup support structure.
	RCCHECK(rclc_support_init_with_options(&m_support, 0, NULL, &m_init_options, &m_allocator));


    printf("Node Init\r\n");
    RCCHECK(rclc_node_init_default(&m_node, m_name, m_namespace , &m_support));
   
    printf("Executor Init\r\n");
    RCCHECK(rclc_executor_init(&m_executor, &m_support.context, 2, &m_allocator));
    
}


void microros_app::run() {
    
	printf("\r\nRunning ROS App\r\n");
    // Spin forever
	while(1){
		rclc_executor_spin_some(&m_executor, RCL_MS_TO_NS(100));
		usleep(1000000);
	}
    
    RCCHECK(rcl_node_fini(&m_node));
}

void microros_app::setI2CHostDriver(I2C_driver_iface* i2c_driver) {
   this->m_i2c_host_driver = i2c_driver;
}

void microros_app::add_ros_subscription(ros_subscription_iface* sub, microros_app *app) {
	if (this->subscriptions_index < MAX_SUBSCRIPTIONS)
	{
		this->subscriptions[this->subscriptions_index++] = sub;
		sub->attach(app);
	}
}

I2C_driver_iface* microros_app::getI2CHostDriver() {
   return this->m_i2c_host_driver;
}

rcl_allocator_t* microros_app::get_ROS_Allocator() {
		return &this->m_allocator;
}
        
rclc_support_t* microros_app::get_ROS_Support() {
	return &this->m_support;
}

rcl_init_options_t* microros_app::get_ROS_InitOptions() {
	return &this->m_init_options;
} 

rcl_node_t*  microros_app::get_ROS_Node() {
	return &this->m_node;
}

rclc_executor_t* microros_app::get_ROS_Executor(){
	return &this->m_executor;
}

char* microros_app::get_Node_Name(){
	return this->m_name;
}

char* microros_app::get_Node_Namespace(){
	return this->m_namespace;
}