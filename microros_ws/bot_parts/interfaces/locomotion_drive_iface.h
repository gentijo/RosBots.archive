
#ifndef _LOCOMOTION_DRIVE_IFACE_H_
#define _LOCOMOTION_DRIVE_IFACE_H_

#include <stdint.h>


class locomotion_drive_iface {
    public:
        virtual void drive_forward(uint8_t speed, uint16_t distance)=0;
        virtual void drive_backward(uint8_t speed, uint16_t distance)=0;
        virtual void drive_turnLeft(uint8_t speed, uint8_t degrees, uint8_t radius)=0;
        virtual void drive_turnRight(uint8_t speed, uint8_t degrees, uint8_t radius)=0;
        virtual void drive_stop()=0;
};

#endif
