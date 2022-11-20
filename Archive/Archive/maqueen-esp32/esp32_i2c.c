
#include <stdio.h>
#include "esp32_i2c.h"


#define DATA_LENGTH 512                  /*!< Data buffer length  */


#define I2C_DEVICE_SCL_IO CONFIG_I2C_DEVICE_SCL               /*!< gpio number for i2c device clock */
#define I2C_DEVICE_SDA_IO CONFIG_I2C_DEVICE_SDA               /*!< gpio number for i2c device data */

#define I2C_DEVICE_TX_BUF_LEN (2 * DATA_LENGTH)              /*!< I2C device tx buffer size */
#define I2C_DEVICE_RX_BUF_LEN (2 * DATA_LENGTH)              /*!< I2C device rx buffer size */

#define I2C_HOST_SCL_IO CONFIG_I2C_HOST_SCL               /*!< gpio number for I2C master clock */
#define I2C_HOST_SDA_IO CONFIG_I2C_HOST_SDA               /*!< gpio number for I2C master data  */

#define I2C_HOST_FREQ_HZ CONFIG_I2C_HOST_FREQUENCY        /*!< I2C master clock frequency */
#define I2C_HOST_TX_BUF_DISABLE 1                           /*!< I2C master doesn't need buffer */
#define I2C_HOST_RX_BUF_DISABLE 1                           /*!< I2C master doesn't need buffer */

#define ESP_DEVICE_ADDR CONFIG_I2C_DEVICE_ADDRESS /*!< ESP32 device address, you can set any 7bit value */

#define WRITE_BIT I2C_MASTER_WRITE              /*!< I2C master write */
#define READ_BIT I2C_MASTER_READ                /*!< I2C master read */

#define ACK_CHECK_EN 0x1                        /*!< I2C master will check ack from device*/
#define ACK_CHECK_DIS 0x0                       /*!< I2C master will not check ack from device */
#define ACK_VAL 0x0                             /*!< I2C ack value */
#define NACK_VAL 0x1                            /*!< I2C nack value */

SemaphoreHandle_t print_mux = NULL;

/**
 * @brief test code to read esp-i2c-device
 *        We need to fill the buffer of esp device device, then master can read them out.
 *
 * _______________________________________________________________________________________
 * | start | device_addr + rd_bit +ack | read n-1 bytes + ack | read 1 byte + nack | stop |
 * --------|--------------------------|----------------------|--------------------|------|
 *
 * @note cannot use master read device on esp32c3 because there is only one i2c controller on esp32c3
 */
esp_err_t __attribute__((unused)) i2c_host_read_device(i2c_port_t i2c_port, uint8_t dev_addr, uint8_t *data_rd, size_t size)
{
    if (size == 0) {
        return ESP_OK;
    }
    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, (dev_addr<< 1) | READ_BIT, ACK_CHECK_EN);
    if (size > 1) {
        i2c_master_read(cmd, data_rd, size - 1, ACK_VAL);
    }
    i2c_master_read_byte(cmd, data_rd + size - 1, NACK_VAL);
    i2c_master_stop(cmd);
    esp_err_t ret = i2c_master_cmd_begin(i2c_port, cmd, 1000 / portTICK_RATE_MS);
    i2c_cmd_link_delete(cmd);
    return ret;
}

/**
 * @brief Test code to write esp-i2c-device
 *        Master device write data to device(both esp32),
 *        the data will be stored in device buffer.
 *        We can read them out from device buffer.
 *
 * ___________________________________________________________________
 * | start | device_addr + wr_bit + ack | write n bytes + ack  | stop |
 * --------|---------------------------|----------------------|------|
 *
 * @note cannot use master write device on esp32c3 because there is only one i2c controller on esp32c3
 */
esp_err_t __attribute__((unused)) i2c_host_write_device(i2c_port_t i2c_port, uint8_t dev_addr, uint8_t *data_wr, size_t size)
{
    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, (dev_addr << 1) | WRITE_BIT, ACK_CHECK_EN);
    i2c_master_write(cmd, data_wr, size, ACK_CHECK_EN);
    i2c_master_stop(cmd);
    esp_err_t ret = i2c_master_cmd_begin(i2c_port, cmd, 1000 / portTICK_RATE_MS);
    i2c_cmd_link_delete(cmd);
    return ret;
}


/**
 * @brief i2c master initialization
 */
esp_err_t i2c_host_init(uint8_t i2c_port)
{

    i2c_config_t conf = {
        .mode = I2C_MODE_MASTER,
        .sda_io_num = I2C_HOST_SDA_IO,
        .sda_pullup_en = GPIO_PULLUP_ENABLE,
        .scl_io_num = I2C_HOST_SCL_IO,
        .scl_pullup_en = GPIO_PULLUP_ENABLE,
        .master.clk_speed = I2C_HOST_FREQ_HZ,
        // .clk_flags = 0,          /*!< Optional, you can use I2C_SCLK_SRC_FLAG_* flags to choose i2c source clock here. */
    };

    esp_err_t err = i2c_param_config(i2c_port, &conf);
    if (err != ESP_OK) {
        return err;
    }

    return i2c_driver_install(i2c_port, conf.mode, I2C_HOST_RX_BUF_DISABLE, I2C_HOST_TX_BUF_DISABLE, 0);
}

/**
 * @brief i2c device initialization
 */
esp_err_t i2c_device_init(uint8_t i2c_port)
{
 
    i2c_config_t conf_device = {
        .sda_io_num = I2C_DEVICE_SDA_IO,
        .sda_pullup_en = GPIO_PULLUP_ENABLE,
        .scl_io_num = I2C_DEVICE_SCL_IO,
        .scl_pullup_en = GPIO_PULLUP_ENABLE,
        .mode = I2C_MODE_SLAVE,
        .slave.addr_10bit_en = 0,
        .slave.slave_addr = ESP_DEVICE_ADDR,
    };

    esp_err_t err = i2c_param_config(i2c_port, &conf_device);
    if (err != ESP_OK) {
        return err;
    }

    return i2c_driver_install(i2c_port, conf_device.mode, I2C_DEVICE_RX_BUF_LEN, I2C_DEVICE_TX_BUF_LEN, 0);
}


