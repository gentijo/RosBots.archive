#include "microbot.h"

#include "esp32_i2c.h"
#include "driver/uart.h"

#include <uros_network_interfaces.h>
#include "locomotion_control.h"
#include "exc_sub_timer.h"

#define DOMAIN_ID 0

const char * namespace = "";
char name[26] = "TurtleBot";

void micro_ros_task(void * arg)
{
    rcl_allocator_t allocator = rcl_get_default_allocator();
	rclc_support_t support;

	// Create init_options.
    printf("Initializing the system");
	rcl_init_options_t init_options = rcl_get_zero_initialized_init_options();

    printf("\r\nRCL Options Init");
	RCCHECK(rcl_init_options_init(&init_options, allocator));
    printf("\r\n RCL Set Domain ID");
	RCCHECK(rcl_init_options_set_domain_id(&init_options, DOMAIN_ID));

#ifdef CONFIG_MICRO_ROS_ESP_XRCE_DDS_MIDDLEWARE
	rmw_init_options_t* rmw_options = rcl_init_options_get_rmw_init_options(&init_options);

	// Static Agent IP and port can be used instead of autodisvery.
    printf("\r\nConfigure ROS Middleware");
	RCCHECK(rmw_uros_options_set_udp_address(CONFIG_MICRO_ROS_AGENT_IP, CONFIG_MICRO_ROS_AGENT_PORT, rmw_options));
	//RCCHECK(rmw_uros_discover_agent(rmw_options));
#endif

    printf("Init RCLC\r\n");
	// Setup support structure.
	RCCHECK(rclc_support_init_with_options(&support, 0, NULL, &init_options, &allocator));

    // create node
    rcl_node_t node;

    RCCHECK(rclc_node_init_default(&node, name, namespace , &support));
    printf("Node Init\r\n");

     // create executor
    rclc_executor_t executor;
    RCCHECK(rclc_executor_init(&executor, &support.context, 2, &allocator));
    printf("Executor Init\r\n");
    
    printf("Init I2C subsystem\r\n");
    i2c_host_init(1);

    printf("Init Timer Subscription\r\n");
    register_timer_subscription(&support, &node, &executor);

    locomotion_ctrl_init(name, &node, &support, &executor);
 
  
    // Spin forever
	while(1){
		rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
		usleep(100000);
	}

    RCCHECK(rcl_node_fini(&node));
}

void app_main(void)
{
#if defined(CONFIG_MICRO_ROS_ESP_NETIF_WLAN) || defined(CONFIG_MICRO_ROS_ESP_NETIF_ENET)
    ESP_ERROR_CHECK(uros_network_interface_initialize());
#endif
    const uart_port_t uart_num = UART_NUM_0;
    uart_config_t uart_config = {
        .baud_rate = 115200,
        .data_bits = UART_DATA_8_BITS,
        .parity = UART_PARITY_DISABLE,
        .stop_bits = UART_STOP_BITS_1,
        .flow_ctrl =  UART_HW_FLOWCTRL_DISABLE
    };
    // Configure UART parameters
    ESP_ERROR_CHECK(uart_param_config(uart_num, &uart_config));

    //pin micro-ros task in APP_CPU to make PRO_CPU to deal with wifi:
    xTaskCreate(micro_ros_task,
            "uros_task",
            CONFIG_MICRO_ROS_APP_STACK,
            NULL,
            CONFIG_MICRO_ROS_APP_TASK_PRIO,
            NULL);

}