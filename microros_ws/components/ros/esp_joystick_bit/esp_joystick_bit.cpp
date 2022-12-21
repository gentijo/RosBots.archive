#include "esp_joystick_bit.h"

static esp_adc_cal_characteristics_t adc2_chars;
static esp_adc_cal_characteristics_t adc1_chars;

void esp_joystick_bit::attach()
{
	printf("\r\nattaching Joystick Manager");
    
    init_gpio();

    esp_adc_cal_characterize(ADC_UNIT_1, ADC_ATTEN_DB_11, ADC_WIDTH_12Bit, 0, &adc1_chars);
    esp_adc_cal_characterize(ADC_UNIT_2, ADC_ATTEN_DB_11, ADC_WIDTH_12Bit, 0, &adc2_chars);

    adc1_config_width(ADC_WIDTH_12Bit);
//    adc2_config_width(ADC_WIDTH_12Bit);

    adc1_config_channel_atten(ADC1_CHANNEL_4, ADC_ATTEN_DB_11);
    adc2_config_channel_atten(ADC2_CHANNEL_4, ADC_ATTEN_DB_11);
    adc2_config_channel_atten(ADC2_CHANNEL_7, ADC_ATTEN_DB_11);

	g_ros_app->get_MicrorosApp()->add_ros_subscription(
		new microros_timer_mgr(&esp_joystick_bit::timer_callback, 1000));

};

const char* esp_joystick_bit::getTopicName() {
    return "/cmd_vel";
}

bool esp_joystick_bit::isBestEffort() { return true; }

const rosidl_message_type_support_t* esp_joystick_bit::get_IDL_MessageType() {
  const rosidl_message_type_support_t * type_support =
    ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist);

    return type_support;
}

void esp_joystick_bit::release()
{

};

void esp_joystick_bit::timer_callback(rcl_timer_t *timer, int64_t last_call_time) {

    int adc_value, adc2_value;
 
    adc2_config_channel_atten( ADC2_CHANNEL_4, ADC_ATTEN_11db );
    adc2_get_raw( ADC2_CHANNEL_4, ADC_WIDTH_12Bit, &adc2_value);
    printf("\r\nADC 9 Value: %d\r\n", adc2_value);

    adc_value = adc1_get_raw( ADC1_CHANNEL_4 );
    printf("\r\nADC 4 Value: %d", adc_value);

    adc2_config_channel_atten( ADC2_CHANNEL_4, ADC_ATTEN_11db );
    adc2_get_raw( ADC2_CHANNEL_4, ADC_WIDTH_12Bit, &adc2_value);
    printf("\r\nADC2 4 Value: %d\r\n", adc2_value );

    adc2_config_channel_atten( ADC2_CHANNEL_7, ADC_ATTEN_11db );
    adc2_get_raw( ADC2_CHANNEL_7, ADC_WIDTH_12Bit, &adc2_value);
    printf("\r\nADC 8 Value: %d\r\n", adc2_value );

};


void esp_joystick_bit::init_gpio()
{
    //zero-initialize the config structure.
    gpio_config_t io_conf = {};
    //disable interrupt
    io_conf.intr_type = GPIO_INTR_DISABLE;
    //set as output mode
    io_conf.mode = GPIO_MODE_INPUT;
    //bit mask of the pins that you want to set,e.g.GPIO18/19
    io_conf.pin_bit_mask = JOYSTICK_PIN_SEL | BUTTONS_PIN_SEL | (1ULL<<GPIO_NUM_32);
    //disable pull-down mode
    io_conf.pull_down_en = GPIO_PULLDOWN_DISABLE;
    //disable pull-up mode
    io_conf.pull_up_en = GPIO_PULLUP_ENABLE;
    //configure GPIO with the given settings
    gpio_config(&io_conf);

	gpio_set_direction(JOYSTICK_X_PIN, GPIO_MODE_INPUT);   
    gpio_set_direction(JOYSTICK_Y_PIN, GPIO_MODE_INPUT);
    gpio_set_direction(BUTTONS_PIN, GPIO_MODE_INPUT);
    gpio_set_direction(GPIO_NUM_32, GPIO_MODE_INPUT);


 //   esp_adc_cal_characterize(ADC_UNIT_2, ADC_ATTEN_DB_11, ADC_WIDTH_BIT_12, 0, &adc1_chars);
 //   adc2_config_width(ADC_WIDTH_BIT_12);

}
