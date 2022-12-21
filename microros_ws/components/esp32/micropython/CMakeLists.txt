
# Set the location of this port's directory.
get_filename_component(MICROPY_PORT_DIR "../../extern/micropython/ports/esp32" ABSOLUTE)
message("MicroPy Port Dir is ${MICROPY_PORT_DIR}")  


# Set the board if it's not already set.
if(NOT MICROPY_BOARD)
    set(MICROPY_BOARD GENERIC)
endif()

# Set the board directory and check that it exists.
if(NOT MICROPY_BOARD_DIR)
    set(MICROPY_BOARD_DIR ${MICROPY_PORT_DIR}/boards/${MICROPY_BOARD})
endif()
if(NOT EXISTS ${MICROPY_BOARD_DIR}/mpconfigboard.cmake)
    message(FATAL_ERROR "Invalid MICROPY_BOARD specified: ${MICROPY_BOARD}")
endif()

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

# Add sdkconfig fragments that depend on the IDF version.
if(IDF_VERSION_MAJOR EQUAL 4 AND IDF_VERSION_MINOR LESS 2)
    set(SDKCONFIG_DEFAULTS ${SDKCONFIG_DEFAULTS} boards/sdkconfig.nimble_core0)
else()
    set(SDKCONFIG_DEFAULTS ${SDKCONFIG_DEFAULTS} boards/sdkconfig.nimble_core1)
endif()

message("bin dir ${CMAKE_BINARY_DIR}")
message("sdk defaults ${SDKCONFIG_DEFAULTS}")

set(MICROPY_SDK_CONFIG_FILE    ${CMAKE_BINARY_DIR}/micropy.sdkconfig.combined)
set(MICROPY_SDK_CONFIG_FILE_IN ${CMAKE_BINARY_DIR}/micropy.sdkconfig.combined.in)

# Concatenate all sdkconfig files into a combined one for the IDF to use.
file(WRITE ${MICROPY_SDK_CONFIG_FILE_IN} "")
foreach(SDKCONFIG_DEFAULT ${SDKCONFIG_DEFAULTS})
    file(READ ${MICROPY_PORT_DIR}/${SDKCONFIG_DEFAULT} CONTENTS)
    file(APPEND ${MICROPY_SDK_CONFIG_FILE_IN} "${CONTENTS}")
endforeach()
configure_file(${MICROPY_SDK_CONFIG_FILE_IN} ${MICROPY_SDK_CONFIG_FILE} COPYONLY)


set(SDKCONFIG_DEFAULTS ${MICROPY_SDK_CONFIG_FILE})

