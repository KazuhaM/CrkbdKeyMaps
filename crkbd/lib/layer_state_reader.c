
#include QMK_KEYBOARD_H
#include <stdio.h>
#include "crkbd.h"

// in the future, should use (1U<<_LAYER_NAME) instead, but needs to be moved to keymap,c
/* #define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8
#define L_ADJUST_TRI 14 */

//#define L_MDVORAK 0
#define L_SMDVORAK 2
#define L_MSKYTOUCH 4
#define L_SMSKYTOUCH 8
#define L_MARK 16
#define L_SMARK 32
#define L_NUM 64
#define L_SNUM 128
#define L_FUNC 256
#define L_SFUNC 512
#define L_EFUNC 1024

char layer_state_str[24];

const char *read_layer_state(void) {
  if ((layer_state / L_EFUNC) % 2 == 1){
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: E_Function");
  }else if ((layer_state / L_SFUNC) % 2 == 1){
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: S_Function");
  }else if ((layer_state / L_FUNC) % 2 == 1){
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Function");
  }else if ((layer_state / L_SNUM) % 2 == 1){
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: S_Numpad");
  }else if ((layer_state / L_NUM) % 2 == 1){
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Numpad");
  }else if ((layer_state / L_SMARK) % 2 == 1){
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: S_Mark");
  }else if ((layer_state / L_MARK) % 2 == 1){
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Mark");
  }else if ((layer_state / L_SMSKYTOUCH) % 2 == 1){
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: S_Japanese");
  }else if ((layer_state / L_MSKYTOUCH) % 2 == 1){
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Japanese");
  }else if ((layer_state / L_SMDVORAK) % 2 == 1){
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: S_English");
  }else if (layer_state % 2 == 1){
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: English");
  }else if (layer_state == 0){
    snprintf(layer_state_str, sizeof(layer_state_str), "Base");
  }else{
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%ld", layer_state);
  }
  return layer_state_str;
 /* case L_SMDVORAK:
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

  return layer_state_str;*/
}
