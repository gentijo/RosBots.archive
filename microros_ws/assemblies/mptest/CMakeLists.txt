cmake_minimum_required(VERSION 3.5)

get_filename_component(PROJECT_DIR "./" ABSOLUTE)
message("Project Dir is ${PROJECT_DIR}")  

set (EXTRA_COMPONENT_DIRS  "./../../.")

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(mptest)

message("\r\n\n\nCMake C Compiler: " ${CMAKE_C_COMPILER})

include("./../../components/esp32/micropython/CMakeLists.txt")
include("./../../components/esp32/micropython/CMakeLists_02.txt")


set(SDK_CONFIG_FILE_IN  ${PROJECT_DIR}/sdkconfig)
set(SDK_CONFIG_FILE     ${CMAKE_BINARY_DIR}/sdkconfig)

# Concatenate all sdkconfig files into a combined one for the IDF to use.
file(WRITE ${SDK_CONFIG_FILE} "")

file(READ ${MICROPY_SDK_CONFIG_FILE} CONTENTS)
file(APPEND ${SDK_CONFIG_FILE} "${CONTENTS}")

file(READ ${SDK_CONFIG_FILE_IN} CONTENTS)
file(APPEND ${SDK_CONFIG_FILE} "${CONTENTS}")

#configure_file(${SDK_CONFIG_FILE_IN} ${SDK_CONFIG_FILE} COPYONLY)
set(SDKCONFIG_DEFAULTS ${SDK_CONFIG_FILE})