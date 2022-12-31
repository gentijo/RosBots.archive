
get_filename_component(MICROPY_PORT_DIR ${PROJECT_DIR}/../../components/esp32/micropython_min ABSOLUTE)

# Set location of base MicroPython directory.
if(NOT MICROPY_DIR)
    get_filename_component(MICROPY_DIR ${PROJECT_DIR}/../../extern/micropython ABSOLUTE)
endif()

message("\r\nMicroPy Port Dir is ${MICROPY_PORT_DIR}")  
message("\r\nCMake Bin Dir ${CMAKE_BINARY_DIR}")
message("\r\nSDK defaults ${SDKCONFIG_DEFAULTS}")


include(${MICROPY_PORT_DIR}/CMakeLists.txt)
