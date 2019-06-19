#include QMK_KEYBOARD_H
#include <stdio.h>
#include "crkbd.h"

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


char layer_state_str2[60];

const char *read_layer_state2(void) {
  switch (layer_state)
  {
  case L_MDVORAK:
    layer_state;
    break;
  case L_SMDVORAK:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "⊂a⊃a∪a∩a∧a∨a￢a⇒a⇔a∀a∃a∠a⊥a⌒a∂");
    break;
  case L_MSKYTOUCH:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "a§a☆a★a○a");
    break;
  case L_SMSKYTOUCH:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "ΑΒΓΔΕΖΗΘΙΚΛΜΝΞΟ");
    break;
  case L_MARK:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "─│┌┐┘└├┬┤┴");
    break;
  case L_SMARK:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "━┃┏┓┛┗┣┳┫┻╋┠");
    break;
  case L_NUM:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "①②③④⑤⑥⑦⑧⑨⑩⑪⑫⑬⑭⑮⑯⑰⑱⑲⑳");
    break;
  case L_SNUM:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "S_Numpad");
    break;
  case L_FUNC:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "Function");
    break;
  case L_SFUNC:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "S-Function");
    break;
  case L_EFUNC:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "E-Function");
    break;
  case L_MDVORAK + 1:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "English");
    break;
  case L_SMDVORAK + 1:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "S_English");
    break;
  case L_MARK + 1:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "Mark");
    break;
  case L_SMARK + 1:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "S_Mark");
    break;
  case L_NUM + 1:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "Numpad");
    break;
  case L_SNUM + 1:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "S_Numpad");
    break;
  case L_FUNC + 1:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "Function");
    break;
  case L_SFUNC + 1:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "S-Function");
    break;
  case L_EFUNC + 1:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "E-Function");
    break;
  case L_MARK + 4:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "Mark");
    break;
  case L_SMARK + 4:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "S_Mark");
    break;
  case L_NUM + 4:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "Numpad");
    break;
  case L_SNUM + 4:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "S_Numpad");
    break;
  case L_FUNC + 4:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "Function");
    break;
  case L_SFUNC + 4:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "S-Function");
    break;
  case L_EFUNC + 4:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "E-Function");
    break;
  default:
    snprintf(layer_state_str2, sizeof(layer_state_str2), "□□□□□□□");
  }

  return layer_state_str2;
}
