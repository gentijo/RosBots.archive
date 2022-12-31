
# Save the manifest file set from the cmake command line.
set(MICROPY_USER_FROZEN_MANIFEST ${MICROPY_FROZEN_MANIFEST})

# Include core source components.
include(${MICROPY_DIR}/py/py.cmake)

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


set(MICROPY_SOURCE_PORT
    ${MICROPY_PORT_DIR}/main.c
)

set(MICROPY_SOURCE_QSTR
    ${MICROPY_SOURCE_PY}
    ${MICROPY_SOURCE_EXTMOD}
    ${MICROPY_SOURCE_USERMOD}
    ${MICROPY_SOURCE_SHARED}
    ${MICROPY_SOURCE_LIB}
)

set(IDF_COMPONENTS
    app_update
    bootloader_support
    bt
    driver
    esp_adc_cal
    esp_common
    esp_eth
    esp_event
    esp_ringbuf
    esp_rom
    esp_wifi
    freertos
    heap
    log
    lwip
    mbedtls
    mdns
    newlib
    nvs_flash
    sdmmc
    soc
    spi_flash
    tcpip_adapter
    ulp
    vfs
    xtensa
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

# Set the MicroPython target 
set(MICROPY_TARGET "micropy")

#message(
#        "\r\n MICROPY_SOURCE_PY: " ${MICROPY_SOURCE_PY}
#        "\r\n MICROPY_SOURCE_EXTMOD: " ${MICROPY_SOURCE_EXTMOD}
#        "\r\n MICROPY_SOURCE_SHARED: " ${MICROPY_SOURCE_SHARED}
#        "\r\n MICROPY_SOURCE_LIB: " ${MICROPY_SOURCE_LIB}
#        "\r\n MICROPY_SOURCE_DRIVERS: " ${MICROPY_SOURCE_DRIVERS}
#        "\r\n MICROPY_SOURCE_PORT: " ${MICROPY_SOURCE_PORT}
#        "\r\n MICROPY_SOURCE_BOARD: " ${MICROPY_SOURCE_BOARD}
#)

include_directories(AFTER
    "${CMAKE_BINARY_DIR}/config"
    ${MICROPY_INC_CORE}
    ${MICROPY_INC_USERMOD}
    ${MICROPY_PORT_DIR}
    ${MICROPY_BOARD_DIR}
    ${CMAKE_BINARY_DIR}
    ${MICROPY_DIR}
)

# Register the main IDF component.
add_library( ${MICROPY_TARGET} STATIC
        ${MICROPY_SOURCE_PY}
        ${MICROPY_SOURCE_EXTMOD}
        ${MICROPY_SOURCE_SHARED}
        ${MICROPY_SOURCE_LIB}
        ${MICROPY_SOURCE_DRIVERS}
)

# Define mpy-cross flags, for use with frozen code.
set(MICROPY_CROSS_FLAGS -march=xtensawin)

# Disable some warnings to keep the build output clean.
target_compile_options(${MICROPY_TARGET} PUBLIC
    -Wno-clobbered
    -Wno-deprecated-declarations
    -Wno-missing-field-initializers
)


# Add additional extmod and usermod components.
target_link_libraries(${MICROPY_TARGET} micropy_extmod_btree)
target_link_libraries(${MICROPY_TARGET} usermod)

message("\r\n\n\nCMake C Compiler: " ${CMAKE_C_COMPILER})
# Include the main MicroPython cmake rules.
include(${MICROPY_DIR}/py/mkrules.cmake)



