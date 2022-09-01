idf_component_register(
    SRCS "main.cpp" 
        "../../../bot_parts/components/microros_app/microros_app.cpp"
        "../../../bot_parts/components/microros_timer_mgr/microros_timer_mgr.cpp"
        "../../../bot_parts/drivers/esp_I2Cdev/esp_I2Cdev.cpp"
    INCLUDE_DIRS 
        "./"
        "../include/"
        "../../../bot_parts"
)
