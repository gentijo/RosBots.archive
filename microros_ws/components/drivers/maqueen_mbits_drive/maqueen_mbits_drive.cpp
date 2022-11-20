#include "maqueen_mbits_drive.h"
#include "drivers/esp_I2Cdev/esp_I2Cdev.h"


#define I2C_DEFAULT_TIMEOUT 100
void maqueen_mbits_drive::drive_forward(uint8_t speed, uint16_t distance)
{
  printf("Drive Forward\r\n");
  uint8_t buf[4] = {
      Motor_Forward,
      speed,
      Motor_Forward,
      speed};

  if_I2C_driver* i2c_drv = m_platform->getI2CHostDriver();
  i2c_drv->writeBytes(
    this->Maqueen_I2C_DevAddr, LEFT_MOTOR_REGISTER, 4, buf);

}

void maqueen_mbits_drive::drive_backward(uint8_t speed, uint16_t distance)
{

  uint8_t buf[4] = {
      Motor_Reverse,
      speed,
      Motor_Reverse,
      speed};

  this->m_platform->getI2CHostDriver()->writeBytes(
      this->Maqueen_I2C_DevAddr, LEFT_MOTOR_REGISTER, 4, buf);
}

void maqueen_mbits_drive::drive_turnLeft(uint8_t speed, uint8_t degrees, uint8_t radius)
{

  if (speed < 2)
    speed = 2;

  uint8_t buf[] = {
      Motor_Forward,
      speed,
      Motor_Reverse,
      speed};

  this->m_platform->getI2CHostDriver()->writeBytes(
      this->Maqueen_I2C_DevAddr, LEFT_MOTOR_REGISTER, 4, buf);

}

void maqueen_mbits_drive::drive_turnRight(uint8_t speed, uint8_t degrees, uint8_t radius)
{

  if (speed < 2)
    speed = 2;

  uint8_t buf[] = {
      Motor_Reverse,
      speed,
      Motor_Forward,
      speed};

  this->m_platform->getI2CHostDriver()->writeBytes(
      this->Maqueen_I2C_DevAddr, LEFT_MOTOR_REGISTER, 4, buf);
}

void maqueen_mbits_drive::maqueen_mbits_drive::drive_stop()
{

  uint8_t speed = 0;

  uint8_t buf[] = {
      Motor_Forward,
      speed,
      Motor_Forward,
      speed};

  this->m_platform->getI2CHostDriver()->writeBytes(
      this->Maqueen_I2C_DevAddr, LEFT_MOTOR_REGISTER, 4, buf);

}

uint16_t maqueen_mbits_drive::drive_readDistance(enum MotorID motor)
{
  uint16_t  distance;
  uint8_t buf[4];

  this->m_platform->getI2CHostDriver()->readBytes(
      this->Maqueen_I2C_DevAddr, DISTANCE_REGISTER, 4, buf, I2C_DEFAULT_TIMEOUT);

  switch (motor)
  {
  case Motor_Left:
    distance = ((buf[0] << 8 | buf[1]) * 10) / 900;
    break;

  default:
    distance = ((buf[2] << 8 | buf[3]) * 10) / 900;
    break;
  }

  return distance;
}

void maqueen_mbits_drive::drive_clearDistance(enum MotorID motor)
{

  switch (motor)
  {
  case Motor_Left:
    this->m_platform->getI2CHostDriver()->writeByte(
      this->Maqueen_I2C_DevAddr, LEFT_DISTANCE_REGISTER, 0);
    break;

  case Motor_Right:
    this->m_platform->getI2CHostDriver()->writeByte(
      this->Maqueen_I2C_DevAddr, RIGHT_DISTANCE_REGISTER, 0);
    break;

  default:
    uint8_t buf[3] = {0,0,0};
    this->m_platform->getI2CHostDriver()->writeBytes(
      this->Maqueen_I2C_DevAddr, LEFT_DISTANCE_REGISTER, 3, buf);
 
  }
}

uint16_t maqueen_mbits_drive::drive_readSpeed(enum MotorID motor_id)
{
  uint16_t speed = 0;
  uint8_t buf[4];

  this->m_platform->getI2CHostDriver()->readBytes(
      this->Maqueen_I2C_DevAddr, LEFT_MOTOR_REGISTER, 4, buf, I2C_DEFAULT_TIMEOUT);

  if (motor_id == Motor_Left)
  {
    if ((round(buf[1]) < 20) && (round(buf[1]) != 0))
    {
      speed = round(buf[1]) + 255;
    }
    else
    {
      speed = round(buf[1]);
    }
  }
  else if (motor_id == Motor_Right)
  {
    if ((round(buf[3]) < 20) && (round(buf[3]) != 0))
    {
      speed = round(buf[3]) + 255;
    }
    else
    {
      speed = round(buf[3]);
    }
  }
  return speed;
}

uint16_t maqueen_mbits_drive::drive_readDirection(enum MotorID motor_id)
{
  u_int8_t buf[4];

  this->m_platform->getI2CHostDriver()->readBytes(
      this->Maqueen_I2C_DevAddr, LEFT_MOTOR_REGISTER, 4, buf, I2C_DEFAULT_TIMEOUT);

  if (motor_id == Motor_Left)
  {
    return buf[0];
  }
  else if (motor_id == Motor_Right)
  {
    return buf[2];
  }
  return -1;
}

