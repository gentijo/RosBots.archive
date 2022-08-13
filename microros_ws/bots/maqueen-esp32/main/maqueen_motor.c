#include "maqueen_motor.h"

#define dir_fwd 0x01
#define dir_bkwd  0x02

#define motor_left 0x00
#define motor_right 0x02

void maqueen_motor_forward(uint8_t speed) {

  uint8_t buf[5] = {
    motor_left, 
    dir_fwd,
    speed,
    dir_fwd,
    speed
  };

  i2c_master_write_slave(1, 0x10, buf, 5);  
}

void maqueen_motor_backward(uint8_t speed) {

  uint8_t buf[5] = {
    motor_left, 
    dir_bkwd,
    speed,
    dir_bkwd,
    speed
  };

  i2c_master_write_slave(1, 0x10, buf, 5);  

}

void maqueen_motor_turnLeft(uint8_t speed) {

  if (speed < 2) speed = 2;

  uint8_t buf[5] = {
    motor_left, 
    dir_fwd,
    speed,
    dir_bkwd,
    speed
  };

  i2c_master_write_slave(1, 0x10, buf, 5);  

}

void maqueen_motor_turnRight(uint8_t speed) {
   
  if (speed < 2) speed = 2;

  uint8_t buf[5] = {
    motor_left, 
    dir_bkwd,
    speed,
    dir_fwd,
    speed
  };

  i2c_master_write_slave(1, 0x10, buf, 5);  
}


void maqueen_motor_stop() {
 
  uint8_t speed = 0;

  uint8_t buf[5] = {
    motor_left, 
    dir_fwd,
    speed,
    dir_fwd,
    speed
  };

  i2c_master_write_slave(1, 0x10, buf, 5);  
}

