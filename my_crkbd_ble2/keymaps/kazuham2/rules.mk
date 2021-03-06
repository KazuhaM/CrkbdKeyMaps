
# MY_CRKBD_BLE2 keyboard customize
# you can edit following Variables
MY_CRKBD_BLE2_ROWS = 4              # MY_CRKBD_BLE2 Rows is 4
LED_BACK_ENABLE = yes        # LED backlight (Enable WS2812 RGB underlight.)
LED_UNDERGLOW_ENABLE = no   # LED underglow (Enable WS2812 RGB underlight.)
LED_ANIMATIONS = yes        # LED animations

define MY_CRKBD_BLE2_CUSTOMISE_MSG
  $(info MY_CRKBD_BLE2 customize)
  $(info -  OLED_ENABLE=$(OLED_ENABLE))
  $(info -  LED_BACK_ENABLE=$(LED_BACK_ENABLE))
  $(info -  LED_UNDERGLOW_ENABLE=$(LED_UNDERGLOW_ENABLE))
  $(info -  LED_ANIMATION=$(LED_ANIMATIONS))
  $(info -  IOS_DEVICE_ENABLE=$(IOS_DEVICE_ENABLE))
endef

ifneq ($(strip $(MY_CRKBD_BLE2_ROWS)), 4)
  ifneq ($(strip $(MY_CRKBD_BLE2_ROWS)), 5)
    $(error MY_CRKBD_BLE2_ROWS = $(strip $(MY_CRKBD_BLE2_ROWS)) is unexpected value)
  endif
endif
OPT_DEFS += -DMY_CRKBD_BLE2_ROWS=$(strip $(MY_CRKBD_BLE2_ROWS))

ifeq ($(strip $(LED_BACK_ENABLE)), yes)
  RGBLIGHT_ENABLE = yes
  OPT_DEFS += -DRGBLED_BACK
  ifeq ($(strip $(LED_UNDERGLOW_ENABLE)), yes)
    $(eval $(call MY_CRKBD_BLE2_CUSTOMISE_MSG))
    $(error LED_BACK_ENABLE and LED_UNDERGLOW_ENABLE both 'yes')
  endif
else ifeq ($(strip $(LED_UNDERGLOW_ENABLE)), yes)
  RGBLIGHT_ENABLE = yes
else
  RGBLIGHT_ENABLE = no
endif

ifeq ($(strip $(LED_ANIMATIONS)), yes)
    OPT_DEFS += -DRGBLIGHT_ANIMATIONS
endif

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no    # Breathing sleep LED during USB suspend