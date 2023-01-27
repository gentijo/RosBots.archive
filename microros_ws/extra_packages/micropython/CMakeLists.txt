message("Begining of MP CMake")

# Set location of base MicroPython directory.
if(NOT MICROPY_DIR)
    get_filename_component(MICROPY_DIR ${PROJECT_DIR}/../../libs/micropython ABSOLUTE)
endif()

get_filename_component(MICROPY_PORT_DIR ${PROJECT_DIR}/../../extra_packages/micropython/src ABSOLUTE)

message ("\r\n Project Dir: ${PROJECT_DIR}")
message ("\r\n CMake Source Dir: ${CMAKE_SOURCE_DIR}")
message ("\r\n Micropython Dir: ${MICROPY_DIR}")
message ("\r\n Micropython Port Dir: ${MICROPY_PORT_DIR}")


# Set the board if it's not already set.
if(NOT MICROPY_BOARD)
    set(MICROPY_BOARD GENERIC)
endif()

# Set the board directory and check that it exists.
if(NOT MICROPY_BOARD_DIR)
    set(MICROPY_BOARD_DIR ${MICROPY_PORT_DIR}/boards/${MICROPY_BOARD})
endif()

message ("\r\n Micropython Board Dir: ${MICROPY_BOARD_DIR}")

if(NOT EXISTS ${MICROPY_BOARD_DIR}/mpconfigboard.cmake)
    message(FATAL_ERROR "Invalid MICROPY_BOARD specified: ${MICROPY_BOARD}")
endif()

# Define the output sdkconfig so it goes in the build directory.
#set(SDKCONFIG ${CMAKE_BINARY_DIR}/sdkconfig)

# Save the manifest file set from the cmake command line.
set(MICROPY_USER_FROZEN_MANIFEST ${MICROPY_FROZEN_MANIFEST})

# Include board config; this is expected to set SDKCONFIG_DEFAULTS (among other options).
include(${MICROPY_BOARD_DIR}/mpconfigboard.cmake)

# Set the frozen manifest file. Note if MICROPY_FROZEN_MANIFEST is set from the cmake
# command line, then it will override the default and any manifest set by the board.
if (MICROPY_USER_FROZEN_MANIFEST)
    set(MICROPY_FROZEN_MANIFEST ${MICROPY_USER_FROZEN_MANIFEST})
elseif (NOT MICROPY_FROZEN_MANIFEST)
    set(MICROPY_FROZEN_MANIFEST ${MICROPY_PORT_DIR}/boards/manifest.py)
endif()

#[[
list(APPEND MICROPY_CPP_INC_EXTRA
    ${MICROPY_DIR}
    ${MICROPY_PORT_DIR}
    ${CMAKE_BINARY_DIR}
)
]]

list(APPEND MICROPY_CPP_DEF 
    NO_QSTR
)

# Include core source components.
include(${MICROPY_DIR}/py/py.cmake)

#f(NOT CMAKE_BUILD_EARLY_EXPANSION)
    # Enable extmod components that will be configured by extmod.cmake.
    # A board may also have enabled additional components.
#    set(MICROPY_PY_BTREE ON)

#    include(${MICROPY_DIR}/py/usermod.cmake)
#    include(${MICROPY_DIR}/extmod/extmod.cmake)
#endif()

set(MICROPY_QSTRDEFS_PORT
    ${MICROPY_PORT_DIR}/qstrdefsport.h
)

set(MICROPY_SOURCE_SHARED
    ${MICROPY_DIR}/shared/readline/readline.c
    ${MICROPY_DIR}/shared/netutils/netutils.c
    ${MICROPY_DIR}/shared/timeutils/timeutils.c
    ${MICROPY_DIR}/shared/runtime/interrupt_char.c
    ${MICROPY_DIR}/shared/runtime/stdout_helpers.c
    ${MICROPY_DIR}/shared/runtime/sys_stdio_mphal.c
    ${MICROPY_DIR}/shared/runtime/pyexec.c

#    ${MICROPY_DIR}/extmod/modwebrepl.c

)

set(MICROPY_SOURCE_LIB
#    ${MICROPY_DIR}/lib/littlefs/lfs1.c
#    ${MICROPY_DIR}/lib/littlefs/lfs1_util.c
#    ${MICROPY_DIR}/lib/littlefs/lfs2.c
#    ${MICROPY_DIR}/lib/littlefs/lfs2_util.c
#    ${MICROPY_DIR}/lib/mbedtls_errors/mp_mbedtls_errors.c
#    ${MICROPY_DIR}/lib/oofatfs/ff.c
#    ${MICROPY_DIR}/lib/oofatfs/ffunicode.c
)
if(IDF_TARGET STREQUAL "esp32c3")
    list(APPEND MICROPY_SOURCE_LIB ${MICROPY_DIR}/shared/runtime/gchelper_generic.c)
endif()

set(MICROPY_SOURCE_DRIVERS
#    ${MICROPY_DIR}/drivers/bus/softspi.c
#    ${MICROPY_DIR}/drivers/dht/dht.c
    ${MICROPY_PORT_DIR}/uart_core.c
    ${MICROPY_PORT_DIR}/mpthreadport.c
    
#    ${MICROPY_PORT_DIR}/mpmain.c
)

set(MICROPY_SOURCE_QSTR
    ${MICROPY_SOURCE_PY}
    ${MICROPY_SOURCE_EXTMOD}
    ${MICROPY_SOURCE_USERMOD}
    ${MICROPY_SOURCE_SHARED}
    ${MICROPY_SOURCE_LIB}
    ${MICROPY_SOURCE_BOARD}
)

if(IDF_VERSION_MINOR GREATER_EQUAL 1 OR IDF_VERSION_MAJOR GREATER_EQUAL 5)
    list(APPEND IDF_COMPONENTS esp_netif)
endif()

if(IDF_VERSION_MINOR GREATER_EQUAL 2 OR IDF_VERSION_MAJOR GREATER_EQUAL 5)
    list(APPEND IDF_COMPONENTS esp_system)
    list(APPEND IDF_COMPONENTS esp_timer)
endif()

if(IDF_VERSION_MINOR GREATER_EQUAL 3 OR IDF_VERSION_MAJOR GREATER_EQUAL 5)
    list(APPEND IDF_COMPONENTS esp_hw_support)
    list(APPEND IDF_COMPONENTS esp_pm)
    list(APPEND IDF_COMPONENTS hal)
endif()

if(IDF_TARGET STREQUAL "esp32")
    list(APPEND IDF_COMPONENTS esp32)
elseif(IDF_TARGET STREQUAL "esp32c3")
    list(APPEND IDF_COMPONENTS esp32c3)
    list(APPEND IDF_COMPONENTS riscv)
elseif(IDF_TARGET STREQUAL "esp32s2")
    list(APPEND IDF_COMPONENTS esp32s2)
    list(APPEND IDF_COMPONENTS tinyusb)
elseif(IDF_TARGET STREQUAL "esp32s3")
    list(APPEND IDF_COMPONENTS esp32s3)
    list(APPEND IDF_COMPONENTS tinyusb)
endif()

# Register the main IDF component.

idf_component_register(
    SRCS
        ${MICROPY_SOURCE_PY}
        ${MICROPY_SOURCE_EXTMOD}
        ${MICROPY_SOURCE_SHARED}
        ${MICROPY_SOURCE_LIB}
        ${MICROPY_SOURCE_DRIVERS}
        ${MICROPY_SOURCE_PORT}
        ${MICROPY_SOURCE_BOARD}
    INCLUDE_DIRS
        ${MICROPY_INC_CORE}
        ${MICROPY_INC_USERMOD}
        ${MICROPY_PORT_DIR}
        ${MICROPY_BOARD_DIR}
        ${CMAKE_BINARY_DIR}
    REQUIRES
        ${IDF_COMPONENTS}
        nvs_flash 
)

INCLUDE_DIRECTORIES(AFTER 
    ${MICROPY_DIR}
    ${MICROPY_PORT_DIR}
    ${CMAKE_BINARY_DIR}
)


# Set the MicroPython target as the current (main) IDF component target.
set(MICROPY_TARGET ${COMPONENT_TARGET})

# Define mpy-cross flags, for use with frozen code.
set(MICROPY_CROSS_FLAGS -march=xtensawin)

# Set compile options for this port.
target_compile_definitions(${MICROPY_TARGET} PUBLIC
    ${MICROPY_DEF_CORE}
    MICROPY_ESP_IDF_4=1
    MICROPY_VFS_FAT=1
    MICROPY_VFS_LFS2=1
    FFCONF_H=\"${MICROPY_OOFATFS_DIR}/ffconf.h\"
    LFS1_NO_MALLOC LFS1_NO_DEBUG LFS1_NO_WARN LFS1_NO_ERROR LFS1_NO_ASSERT
    LFS2_NO_MALLOC LFS2_NO_DEBUG LFS2_NO_WARN LFS2_NO_ERROR LFS2_NO_ASSERT
)

# Disable some warnings to keep the build output clean.
target_compile_options(${MICROPY_TARGET} PUBLIC
    -Wno-clobbered
    -Wno-deprecated-declarations
    -Wno-missing-field-initializers
)


# Additional include directories needed for private NimBLE headers.
#target_include_directories(${MICROPY_TARGET} PUBLIC
#    ${IDF_PATH}/components/bt/host/nimble/nimble
#)

# Add additional extmod and usermod components.
#target_link_libraries(${MICROPY_TARGET} micropy_extmod_btree)
#target_link_libraries(${MICROPY_TARGET} usermod)

# Collect all of the include directories and compile definitions for the IDF components.
foreach(comp ${IDF_COMPONENTS})
    micropy_gather_target_properties(__idf_${comp})
endforeach()

if(IDF_VERSION_MINOR GREATER_EQUAL 2 OR IDF_VERSION_MAJOR GREATER_EQUAL 5)
    # These paths cannot currently be found by the IDF_COMPONENTS search loop above,
    # so add them explicitly.
    list(APPEND MICROPY_CPP_INC_EXTRA ${IDF_PATH}/components/soc/soc/${IDF_TARGET}/include)
    list(APPEND MICROPY_CPP_INC_EXTRA ${IDF_PATH}/components/soc/soc/include)
    if(IDF_VERSION_MINOR GREATER_EQUAL 3)
        list(APPEND MICROPY_CPP_INC_EXTRA ${IDF_PATH}/components/tinyusb/additions/include)
        list(APPEND MICROPY_CPP_INC_EXTRA ${IDF_PATH}/components/tinyusb/tinyusb/src)
    endif()
endif()


# Include the main MicroPython cmake rules.
include(${MICROPY_DIR}/py/mkrules.cmake)

message("End of MP CMake")