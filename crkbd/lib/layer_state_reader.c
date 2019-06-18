
#include QMK_KEYBOARD_H
#include <stdio.h>
#include "crkbd.h"

// in the future, should use (1U<<_LAYER_NAME) instead, but needs to be moved to keymap,c
/* #define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8
#define L_ADJUST_TRI 14 */

#define L_MDVORAK 0
#define L_SMDVORAK 2
#define L_MSKYTOUCH 4
#define L_SMSKYTOUCH 12
#define L_MARK 16
#define L_SMARK 48
#define L_NUM 64
#define L_SNUM 192
#define L_FUNC 256
#define L_SFUNC 768
#define L_EFUNC 1024

char layer_state_str[24];

const char *read_layer_state(void) {
  switch (layer_state)
  {
  case L_MDVORAK:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: English");
    break;
  case L_SMDVORAK:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: S_English");
    break;
  case L_MSKYTOUCH:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Japanese");
    break;
  case L_SMSKYTOUCH:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: S_Japanese");
    break;
  case L_MARK:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Mark");
    break;
  case L_SMARK:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: S_Mark");
    break;
  case L_NUM:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Numpad");
    break;
  case L_SNUM:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: S_Numpad");
    break;
  case L_FUNC:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Function");
    break;
  case L_SFUNC:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: S-Function");
    break;
  case L_EFUNC:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: E-Function");
    break;
  case L_MDVORAK + 1:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: English");
    break;
  case L_SMDVORAK + 1:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: S_English");
    break;
  case L_MARK + 1:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Mark");
    break;
  case L_SMARK + 1:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: S_Mark");
    break;
  case L_NUM + 1:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Numpad");
    break;
  case L_SNUM + 1:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: S_Numpad");
    break;
  case L_FUNC + 1:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Function");
    break;
  case L_SFUNC + 1:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: S-Function");
    break;
  case L_EFUNC + 1:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: E-Function");
    break;
  case L_MARK + 4:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Mark");
    break;
  case L_SMARK + 4:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: S_Mark");
    break;
  case L_NUM + 4:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Numpad");
    break;
  case L_SNUM + 4:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: S_Numpad");
    break;
  case L_FUNC + 4:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Function");
    break;
  case L_SFUNC + 4:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: S-Function");
    break;
  case L_EFUNC + 4:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: E-Function");
    break;
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%ld", layer_state);
  }

  return layer_state_str;
}
