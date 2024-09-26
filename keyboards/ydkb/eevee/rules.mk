# MCU name
MCU = atmega32u4

# Processor frequency
F_CPU = 8000000

# Bootloader selection
BOOTLOADER = lufa-ms
BOOTLOADER_SIZE = 6144
RESERVE_SIZE = 256

# Build Options
#   change yes to no to disable
#
CUSTOM_MATRIX           = yes   # Custom matrix file
#UNICODE_ENABLE         = yes   # Unicode
BOOTMAGIC_ENABLE        = yes   # Enable Bootmagic Lite
MOUSEKEY_ENABLE        ?= yes   # Mouse keys
EXTRAKEY_ENABLE        ?= yes   # Audio control and System control
CONSOLE_ENABLE         ?= no    # Console for debug
COMMAND_ENABLE          = yes   # Commands for debug and configuration
NKRO_ENABLE             = yes   # USB Nkey Rollover
BACKLIGHT_ENABLE        = no    # Enable keyboard backlight functionality
RGBLIGHT_ENABLE         = no    # Enable keyboard RGB underglow
LTO_ENABLE              = yes   # Enable Link Time Optimization

SRC +=  matrix.c \
        ec_matrix.c \
        led_fn.c \
        light_ws2812.c \
        rgblight.c

    
include $(TMK_DIR)/protocol/ble51.mk
