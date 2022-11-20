
#include "drivers/esp_I2C/esp_i2c.h"


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
bool esp_I2C::writeBytes(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint8_t *data) {

    printf("I2C write bytes port:%d dev:%d reg:%d len:%d ",
      i2c_port, devAddr, regAddr, length);

    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, (devAddr << 1) | WRITE_BIT, ACK_CHECK_EN);
    i2c_master_write_byte(cmd, regAddr, 1);
    i2c_master_write(cmd, data, length, ACK_CHECK_EN);
    i2c_master_stop(cmd);
    esp_err_t ret = i2c_master_cmd_begin(i2c_port, cmd, 1000 / portTICK_RATE_MS);
    i2c_cmd_link_delete(cmd);
    return ret;
}

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
int8_t  esp_I2C::readBytes(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint8_t *data, uint16_t timeout) {

    if (length == 0) {
        return ESP_OK;
    }

    
    selectRegister(devAddr, regAddr);

    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, (devAddr<< 1) | READ_BIT, ACK_CHECK_EN);
    if (length > 1) {
        i2c_master_read(cmd, data, length - 1, I2C_MASTER_ACK);
    }
    i2c_master_read_byte(cmd, data + length - 1, I2C_MASTER_NACK);
    i2c_master_stop(cmd);
    esp_err_t ret = i2c_master_cmd_begin(i2c_port, cmd, 1000 / portTICK_RATE_MS);
    i2c_cmd_link_delete(cmd);

    return ret;
}

bool esp_I2C::selectRegister(uint8_t devAddr, uint8_t regAddr) {

    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, (devAddr << 1) | WRITE_BIT, ACK_CHECK_EN);
    i2c_master_write_byte(cmd, regAddr, 1);
    i2c_master_stop(cmd);
    esp_err_t ret = i2c_master_cmd_begin(i2c_port, cmd, 1000 / portTICK_RATE_MS);
    i2c_cmd_link_delete(cmd);
    return ret;
}


/**
 * @brief i2c master initialization
 */
void esp_I2C::initialize(uint8_t _i2c_port, bool host_mode)
{
    i2c_port = _i2c_port;

    i2c_config_t conf;
    conf.mode = I2C_MODE_MASTER;
    conf.sda_io_num = I2C_HOST_SDA_IO;
    conf.sda_pullup_en = GPIO_PULLUP_ENABLE;
    conf.scl_io_num = I2C_HOST_SCL_IO;
    conf.scl_pullup_en = GPIO_PULLUP_ENABLE;
    conf.master.clk_speed = I2C_HOST_FREQ_HZ;
    conf.clk_flags = 0;    /*!< Optional, you can use I2C_SCLK_SRC_FLAG_* flags to choose i2c source clock here. */


    esp_err_t err = i2c_param_config(i2c_port, &conf);
    if (err != ESP_OK) {
         return;
    }

    
    i2c_driver_install(i2c_port, conf.mode, I2C_HOST_RX_BUF_DISABLE, I2C_HOST_TX_BUF_DISABLE, 0);

    printf ("Init I2C port:%d, sda:%d scl:%d",
        i2c_port, I2C_HOST_SDA_IO, I2C_HOST_SCL_IO);

}

/**
 * @brief i2c device initialization
 */
esp_err_t i2c_device_init(uint8_t i2c_port)
{
 
    i2c_config_t conf;
    conf.sda_io_num = I2C_DEVICE_SDA_IO;
    conf.sda_pullup_en = GPIO_PULLUP_ENABLE;
    conf.scl_io_num = I2C_DEVICE_SCL_IO;
    conf.scl_pullup_en = GPIO_PULLUP_ENABLE;
    conf.mode = I2C_MODE_SLAVE;
    conf.slave.addr_10bit_en = 0;
    conf.slave.slave_addr = ESP_DEVICE_ADDR;

    esp_err_t err = i2c_param_config(i2c_port, &conf);
    if (err != ESP_OK) {
        return err;
    }

    return i2c_driver_install(i2c_port, conf.mode, I2C_DEVICE_RX_BUF_LEN, I2C_DEVICE_TX_BUF_LEN, 0);
}

