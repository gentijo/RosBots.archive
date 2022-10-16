
#include "interfaces/if_I2C_driver.h"
#include "esp32_idf_app.h"
#include <uros_network_interfaces.h>

esp32_idf_app::esp32_idf_app() {

}

void    esp32_idf_app::init() {

    printf("\r\nInitializing Platform %s %s",ESP_WIFI_SSID, ESP_WIFI_PASS );
  
   //  esp_I2Cdev* i2c_host = new esp_I2Cdev();
   //  i2c_host->initialize(1, true);
   //  uros_app.setI2CHostDriver(i2c_host);

 
    const uart_port_t uart_num = UART_NUM_0;
    uart_config_t uart_config;
    uart_config.baud_rate = 115200;
    uart_config.data_bits = UART_DATA_8_BITS;
    uart_config.parity = UART_PARITY_DISABLE;
    uart_config.stop_bits = UART_STOP_BITS_1;
    uart_config.flow_ctrl = UART_HW_FLOWCTRL_DISABLE;

    // Configure UART parameters
    ESP_ERROR_CHECK(uart_param_config(uart_num, &uart_config));

    
 	#if defined(CONFIG_MICRO_ROS_ESP_NETIF_WLAN) || defined(CONFIG_MICRO_ROS_ESP_NETIF_ENET)
    printf("\r\nInitializing Wifi %s %s",ESP_WIFI_SSID, ESP_WIFI_PASS );

    ESP_ERROR_CHECK(uros_network_interface_initialize());
	#endif


}

void esp32_idf_app::setI2CHostDriver(if_I2C_driver *i2c_driver) {
    this->m_i2c_host_driver = i2c_driver;
}

if_I2C_driver* esp32_idf_app::getI2CHostDriver() {

    return this->m_i2c_host_driver;
}
