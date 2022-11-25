idf_component_register(
    SRCS "ros_app.cpp" 
        "../../../components/app/ros/microros_app_base.cpp"
        "../../../components/app/platform/esp32_idf_app.cpp"
        "../../../components/app/rtos/freertos_app.cpp"
        "../../../components/ros/microros_timer_mgr.cpp"
        "../../../components/ros/microros_locomotion_mgr.cpp"
        "../../../components/drivers/maqueen_mbits_drive/maqueen_mbits_drive.cpp"
        "../../../components/drivers/esp_I2C/esp_i2c.cpp"

    INCLUDE_DIRS 
        "./"
        "../../include"
        "../../../components"
)
