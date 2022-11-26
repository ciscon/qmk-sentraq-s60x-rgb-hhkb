# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = no       # Audio control and System control
AUDIO_ENABLE = no           # Audio output
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no     # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes      # Enable RGB light

COMBO_ENABLE = no
COMMAND_ENABLE = no
CONSOLE_ENABLE = no
KEY_LOCK_ENABLE = no
LEADER_ENABLE = no
MIDI_ENABLE =  no
POINTING_DEVICE_ENABLE = no
STENO_ENABLE = no
TAP_DANCE_ENABLE = no
TERMINAL_ENABLE = no
NO_USB_STARTUP_CHECK = no
AUTO_SHIFT_ENABLE = no
AUTO_SHIFT_MODIFIERS = no


#EXTRAFLAGS += -flto
#OPT=2

DEBOUNCE_TYPE=asym_eager_defer_pk

LAYOUTS = 60_hhkb
