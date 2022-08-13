idf_component_register(
    SRCS "main.c" 
    "locomotion_control.c" 
    "exc_sub_timer.c" 
    "maqueen_motor.c"
    "esp32_i2c.c"
    INCLUDE_DIRS "../include/"
)