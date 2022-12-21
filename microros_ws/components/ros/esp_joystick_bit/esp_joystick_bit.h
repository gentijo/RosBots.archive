
#ifndef  __ROS_TIMER_MGR__
#define  __ROS_TIMER_MGR__

#include "geometry_msgs/msg/twist.h"

#include "interfaces/if_ros_publisher.h"
#include "interfaces/if_ros_app.h"
#include "interfaces/if_microros_app.h"

#include "ros/microros_timer_mgr.h"

#include "driver/gpio.h"
#include "driver/adc.h"
#include "esp_adc_cal.h"

#define JOYSTICK_X_PIN  GPIO_NUM_26
#define JOYSTICK_Y_PIN  GPIO_NUM_13
#define BUTTONS_PIN     GPIO_NUM_27

#define JOYSTICK_PIN_SEL    ((1ULL<<JOYSTICK_X_PIN) | (1ULL<<JOYSTICK_Y_PIN) )
#define BUTTONS_PIN_SEL     ((1ULL<<BUTTONS_PIN) )



class esp_joystick_bit : public if_ros_publisher {
    public:
        esp_joystick_bit() {};
        void attach();
        void release();
        const char* getTopicName();
        bool  isBestEffort();
        const rosidl_message_type_support_t *get_IDL_MessageType();

    protected:
        static void timer_callback(rcl_timer_t *timer, int64_t last_call_time);
        void        init_gpio();

};

#endif