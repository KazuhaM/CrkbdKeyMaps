
# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#
MOUSEKEY_ENABLE = no        # Mouse keys(+4700)
EXTRAKEY_ENABLE = no        # Audio control and System control(+450)
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output on port C6
RGBLIGHT_ENABLE = yes       # Enable WS2812 RGB underlight. 
TAP_DANCE_ENABLE = no

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no    # Breathing sleep LED during USB suspend

# If you want to change the display of OLED, you need to change here
SRC +=  ./lib/glcdfont.c \
        ./lib/rgb_state_reader.c \
        ./lib/layer_state_reader.c \
        ./lib/layer_state_reader2.c \
        ./lib/host_led_state_reader.c \
        # ./lib/mode_icon_reader.c \
        # ./lib/keylogger.c \
        # ./lib/logo_reader.c \
        # ./lib/timelogger.c \
