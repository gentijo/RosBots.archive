message ("\r\nIn main component cmake file")

idf_component_register (
    SRCS 
        "ros_app.cpp" 
        "../../../components/app/ros/microros_app_base.cpp"
        "../../../components/app/platform/esp32_idf_app.cpp"
        "../../../components/app/rtos/freertos_app.cpp"
        "../../../components/ros/microros_timer_mgr.cpp"
        "../../../components/drivers/esp_I2C/esp_i2c.cpp"

    INCLUDE_DIRS 
        "./"
        "../../include"
        "../../../components"
)

INCLUDE_DIRECTORIES(
    PUBLIC
        ../../../micro_ros_src/src/rcl/rcl/include
        ../../../micro_ros_src/src/rcutils/include
)
