idf_component_register(
    SRCS "main.cpp" 
        "../../../components/app/app_os/microros_app.cpp"
        "../../../components/app/platform/esp32_idf_app.cpp"
        "../../../components/app/rtos/freertos_app.cpp"
        "../../../components/ros/microros_timer_mgr.cpp"
        "../../../components/ros/microros_locomotion_mgr.cpp"
        "../../../components/drivers/maqueen_mbits_drive/maqueen_mbits_drive.cpp"
    INCLUDE_DIRS 
        "./"
        "../include/"
        "../../../components"
)
