#include <stdio.h>
#include "driver/uart.h"
#include <uros_network_interfaces.h>

#include "components/microros_app/microros_app.h"
#include "drivers/esp_I2Cdev/esp_I2Cdev.h"
#include "interfaces/ros_subscription_iface.h"
#include "components/microros_timer_mgr/microros_timer_mgr.h"


extern "C" void micro_ros_task(void *arg)
{
    microros_app uros_app;
    uros_app.init();

    esp_I2Cdev* i2c_host = new esp_I2Cdev();
    i2c_host->initialize(1, true);
    uros_app.setI2CHostDriver(i2c_host);

    microros_timer_mgr* timer_mgr1 = new microros_timer_mgr();
    uros_app.add_ros_subscription(timer_mgr1, &uros_app);

    uros_app.run();
};

extern "C" void app_main(void)
{
#if defined(CONFIG_MICRO_ROS_ESP_NETIF_WLAN) || defined(CONFIG_MICRO_ROS_ESP_NETIF_ENET)
    ESP_ERROR_CHECK(uros_network_interface_initialize());
#endif
    const uart_port_t uart_num = UART_NUM_0;
    uart_config_t uart_config;
    uart_config.baud_rate = 115200;
    uart_config.data_bits = UART_DATA_8_BITS;
    uart_config.parity = UART_PARITY_DISABLE;
    uart_config.stop_bits = UART_STOP_BITS_1;
    uart_config.flow_ctrl = UART_HW_FLOWCTRL_DISABLE;

    // Configure UART parameters
    ESP_ERROR_CHECK(uart_param_config(uart_num, &uart_config));

    // pin micro-ros task in APP_CPU to make PRO_CPU to deal with wifi:
    xTaskCreate(micro_ros_task,
                "uros_task",
                CONFIG_MICRO_ROS_APP_STACK,
                NULL,
                CONFIG_MICRO_ROS_APP_TASK_PRIO,
                NULL);
};
