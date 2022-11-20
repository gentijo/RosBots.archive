#ifndef MAQUEEN_MOTOR_H
#define MAQUEEN_MOTOR_H

#include "microbot.h"
#include "esp32_i2c.h"
#include "maqueen.h"


void maqueen_motor_forward(uint8_t speed);

void maqueen_motor_backward(uint8_t speed);
void maqueen_motor_turnLeft(uint8_t speed);

void maqueen_motor_turnRight(uint8_t speed);
void maqueen_motor_setSpeed(uint8_t speed);
void maqueen_motor_stop();

int maqueen_motor_readDistance(enum MotorID motor);
void maqueen_motor_clearDistance(enum MotorID motor);
int maqueen_motor_readSpeed(enum MotorID motor_id);
int maqueen_motor_readDirection(enum MotorID motor_id);

#endif
