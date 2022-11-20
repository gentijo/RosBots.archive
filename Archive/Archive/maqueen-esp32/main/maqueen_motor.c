#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "maqueen.h"
#include "maqueen_motor.h"

uint8_t Maqueen_I2C_Port = 1;
uint8_t Maqueen_I2C_DevAddr = 0x10;

void maqueen_motor_forward(uint8_t speed)
{

  uint8_t buf[5] = {
      LEFT_MOTOR_REGISTER,
      Motor_Forward,
      speed,
      Motor_Forward,
      speed};

  i2c_host_write_device(Maqueen_I2C_Port, Maqueen_I2C_DevAddr, buf, 5);
}

void maqueen_motor_backward(uint8_t speed)
{

  uint8_t buf[5] = {
      LEFT_MOTOR_REGISTER,
      Motor_Reverse,
      speed,
      Motor_Reverse,
      speed};

  i2c_host_write_device(Maqueen_I2C_Port, Maqueen_I2C_DevAddr, buf, 5);
}

void maqueen_motor_turnLeft(uint8_t speed)
{

  if (speed < 2)
    speed = 2;

  uint8_t buf[5] = {
      LEFT_MOTOR_REGISTER,
      Motor_Forward,
      speed,
      Motor_Reverse,
      speed};

  i2c_host_write_device(Maqueen_I2C_Port, Maqueen_I2C_DevAddr, buf, 5);
}

void maqueen_motor_turnRight(uint8_t speed)
{

  if (speed < 2)
    speed = 2;

  uint8_t buf[5] = {
      LEFT_MOTOR_REGISTER,
      Motor_Reverse,
      speed,
      Motor_Forward,
      speed};

  i2c_host_write_device(Maqueen_I2C_Port, Maqueen_I2C_DevAddr, buf, 5);
}

void maqueen_motor_stop()
{

  uint8_t speed = 0;

  uint8_t buf[5] = {
      LEFT_MOTOR_REGISTER,
      Motor_Forward,
      speed,
      Motor_Forward,
      speed};

  i2c_host_write_device(Maqueen_I2C_Port, Maqueen_I2C_DevAddr, buf, 5);
}

int maqueen_motor_readDistance(enum MotorID motor)
{
  uint8_t distance;
  
  uint8_t buf[1]= {4};
  i2c_host_write_device(Maqueen_I2C_Port, Maqueen_I2C_DevAddr, buf, 1);

  uint8_t speed[4];
  i2c_host_read_device(Maqueen_I2C_Port, Maqueen_I2C_DevAddr, speed, 4);
  
  switch (motor)
  {
    case Motor_Left:
      distance = ((speed[0] << 8 | speed[1]) * 10) / 900;
      break;
  
    default:
      distance = ((speed[2] << 8 | speed[3]) * 10) / 900;
      break;
  }

  return distance;
}

void maqueen_motor_clearDistance(enum MotorID motor)
{
  uint8_t buf2[2];
  uint8_t buf4[4];
 
  switch (motor)
  {
    case Motor_Left:
      buf2[0] = 0x04;
      buf2[1] = 0;
      i2c_host_write_device(Maqueen_I2C_Port, Maqueen_I2C_DevAddr, buf2, 2);
      break;

    case Motor_Right:
      buf2[0] = 0x06;
      buf2[1] = 0;
      i2c_host_write_device(Maqueen_I2C_Port, Maqueen_I2C_DevAddr, buf2, 2);
      break;

    default:
      buf4[0] = 0x04;
      buf4[1] = 0;
      buf4[2] = 0;
      buf4[3] = 0;
      i2c_host_write_device(Maqueen_I2C_Port, Maqueen_I2C_DevAddr, buf4, 4);
  }
}

int maqueen_motor_readSpeed(enum MotorID motor_id)
{
  int speed = 0;

  uint8_t buf[1]={LEFT_MOTOR_REGISTER};
  i2c_host_write_device(Maqueen_I2C_Port, Maqueen_I2C_DevAddr, buf, 1);

  uint8_t buf2[4];
  i2c_host_read_device(Maqueen_I2C_Port, Maqueen_I2C_DevAddr, buf2, 4);

  if (motor_id == Motor_Left)
  {
    if ((round(buf2[1]) < 20) && (round(buf2[1]) != 0))
    {
      speed = round(buf2[1]) + 255;
    }
    else
    {
      speed = round(buf2[1]);
    }
  }
  else if (motor_id == Motor_Right)
  {
    if ((round(buf2[3]) < 20) && (round(buf2[3]) != 0))
    {
      speed = round(buf2[3]) + 255;
    }
    else
    {
      speed = round(buf2[3]);
    }
  }
  return speed;
}

int maqueen_motor_readDirection(enum MotorID motor_id)
{

  uint8_t buf[1]={LEFT_MOTOR_REGISTER};
  i2c_host_write_device(Maqueen_I2C_Port, Maqueen_I2C_DevAddr, buf, 1);

  uint8_t dir[4];
  i2c_host_read_device(Maqueen_I2C_Port, Maqueen_I2C_DevAddr, dir, 4);
  
  if (motor_id == Motor_Left)
  {
    return dir[0];
  }
  else if (motor_id == Motor_Right)
  {
    return dir[2];
  }
  return -1;
}
