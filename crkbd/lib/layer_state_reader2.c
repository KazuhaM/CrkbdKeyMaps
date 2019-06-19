//#include QMK_KEYBOARD_H
//#include <stdio.h>
#include "crkbd.h"

#define L_MDVORAK 0
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

//char layer_state_str2[85];
const char *read_layer_state2(bool OS_State) {
  static char logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x80, 0x85, 0x86, 0x80, 0xd2, 0xd1, 0xd2, 0xd1, 0xd2, 0xd1, 0xd2, 0xd1, 0xd2, 0xd1, 0xd2, 0x11,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0x80, 0xa5, 0xa6, 0x80, 0xd2, 0xd1, 0xd2, 0xd1, 0xd2, 0xd1, 0xd2, 0xd1, 0xd2, 0xd1, 0xd2, 0x11,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0x80, 0x80, 0x80, 0x80, 0xd2, 0xd1, 0xd2, 0xd1, 0xd2, 0xd1, 0xd2, 0xd1, 0xd2, 0xd1, 0xd2, 0x11,
        0};
if (layer_state == 0){
  logo[20] = 0x10;
  logo[41] = 0x10;
  logo[62] = 0x10;
}else{
  logo[20] = 0x11;
  logo[41] = 0x11;
  logo[62] = 0x11;
}
if (OS_State == false) {
    logo[6] = 0x85;
    logo[7] = 0x86;
    logo[27] = 0xa5;
    logo[28] = 0xa6;
  } else {
    logo[6] = 0x87;
    logo[7] = 0x88;
    logo[27] = 0xa7;
    logo[28] = 0xa8;
  }
//English and Shift English Layer
  if (layer_state % 2 == 1) {
    if ((layer_state / L_SMDVORAK) % 2 == 1) {
      logo[18] = 0x99;  //rune up right
      logo[19] = 0x9a;  //rune down right
      logo[39] = 0xb9;  //rune up left
      logo[40] = 0xba;  //rune down left
      logo[60] = 0x8f;  //rune up shift
      logo[61] = 0x90;  //rune down right
    }else{
      logo[18] = 0x99;
      logo[19] = 0x9a;
      logo[39] = 0xb9;
      logo[40] = 0xba;
      logo[60] = 0xd1;
      logo[61] = 0xd2;
    }
  }else if ((layer_state / L_SMDVORAK) % 2 == 1) {
    logo[18] = 0x99;
    logo[19] = 0x9a;
    logo[39] = 0xb9;
    logo[40] = 0xba;
    logo[60] = 0x8f;
    logo[61] = 0x90;
  }else{
    logo[18] = 0xd1;
    logo[19] = 0xd2;
    logo[39] = 0xd1;
    logo[40] = 0xd2;
    logo[60] = 0xd1;
    logo[61] = 0xd2;
  }
//Japanese and Shift Japanese Layer
  if ((layer_state / L_MSKYTOUCH) % 2 == 1) {
    if ((layer_state / L_SMSKYTOUCH) % 2 == 1) {
      logo[16] = 0x97;  //rune up right
      logo[17] = 0x98;  //rune down right
      logo[37] = 0xb7;  //rune up left
      logo[38] = 0xb8;  //rune down left
      logo[58] = 0x8f;  //rune up shift
      logo[59] = 0x90;  //rune down right
    }else{
      logo[16] = 0x97;
      logo[17] = 0x98;
      logo[37] = 0xb7;
      logo[38] = 0xb8;
      logo[58] = 0xd1;
      logo[59] = 0xd2;
    }
  }else if ((layer_state / L_SMSKYTOUCH) % 2 == 1) {
    logo[16] = 0x97;
    logo[17] = 0x98;
    logo[37] = 0xb7;
    logo[38] = 0xb8;
    logo[58] = 0x8f;
    logo[59] = 0x90;
  }else{
    logo[16] = 0xd1;
    logo[17] = 0xd2;
    logo[37] = 0xd1;
    logo[38] = 0xd2;
    logo[58] = 0xd1;
    logo[59] = 0xd2;
  }
//Mark and Shift Mark Layer
  if ((layer_state / L_MARK) % 2 == 1) {
    if ((layer_state / L_SMARK) % 2 == 1) {
      logo[14] = 0x95;  //rune up right
      logo[15] = 0x96;  //rune down right
      logo[35] = 0xb5;  //rune up left
      logo[36] = 0xb6;  //rune down left
      logo[56] = 0x8f;  //rune up shift
      logo[57] = 0x90;  //rune down right
    }else{
      logo[14] = 0x95;
      logo[15] = 0x96;
      logo[35] = 0xb5;
      logo[36] = 0xb6;
      logo[56] = 0xd1;
      logo[57] = 0xd2;
    }
  }else if ((layer_state / L_SMARK) % 2 == 1) {
    logo[14] = 0x95;
    logo[15] = 0x96;
    logo[35] = 0xb5;
    logo[36] = 0xb6;
    logo[56] = 0x8f;
    logo[57] = 0x90;
  }else{
    logo[14] = 0xd1;
    logo[15] = 0xd2;
    logo[35] = 0xd1;
    logo[36] = 0xd2;
    logo[56] = 0xd1;
    logo[57] = 0xd2;
  }
//Num and Shift Num Layer
  if ((layer_state / L_NUM) % 2 == 1) {
    if ((layer_state / L_SNUM) % 2 == 1) {
      logo[12] = 0x93;  //rune up right
      logo[13] = 0x94;  //rune down right
      logo[33] = 0xb3;  //rune up left
      logo[34] = 0xb4;  //rune down left
      logo[54] = 0x8f;  //rune up shift
      logo[55] = 0x90;  //rune down right
    }else{
      logo[12] = 0x93;
      logo[13] = 0x94;
      logo[33] = 0xb3;
      logo[34] = 0xb4;
      logo[54] = 0xd1;
      logo[55] = 0xd2;
    }
  }else if ((layer_state / L_SNUM) % 2 == 1) {
    logo[12] = 0x93;
    logo[13] = 0x94;
    logo[33] = 0xb3;
    logo[34] = 0xb4;
    logo[54] = 0x8f;
    logo[55] = 0x90;
  }else{
    logo[12] = 0xd1;
    logo[13] = 0xd2;
    logo[33] = 0xd1;
    logo[34] = 0xd2;
    logo[54] = 0xd1;
    logo[55] = 0xd2;
  }
//Func and Shift Func Layer
  if ((layer_state / L_FUNC) % 2 == 1) {
    if ((layer_state / L_SFUNC) % 2 == 1) {
      if ((layer_state / L_EFUNC) % 2 == 1) {
        logo[10] = 0x91;  //rune up right
        logo[11] = 0x92;  //rune down right
        logo[31] = 0xb1;  //rune up left
        logo[32] = 0xb2;  //rune down left
        logo[52] = 0xaf;  //rune up shift
        logo[53] = 0xb0;  //rune down right
      }else{
        logo[10] = 0x91;  //rune up right
        logo[11] = 0x92;  //rune down right
        logo[31] = 0xb1;  //rune up left
        logo[32] = 0xb2;  //rune down left
        logo[52] = 0x8f;  //rune up shift
        logo[53] = 0x90;  //rune down right
      }
    }else{
      if ((layer_state / L_EFUNC) % 2 == 1) {
        logo[10] = 0x91;  //rune up right
        logo[11] = 0x92;  //rune down right
        logo[31] = 0xb1;  //rune up left
        logo[32] = 0xb2;  //rune down left
        logo[52] = 0xaf;  //rune up shift
        logo[53] = 0xb0;  //rune down right
      }else{
        logo[10] = 0x91;
        logo[11] = 0x92;
        logo[31] = 0xb1;
        logo[32] = 0xb2;
        logo[52] = 0xd1;
        logo[53] = 0xd2;
      }
    }
  }else if ((layer_state / L_SFUNC) % 2 == 1) {
      if ((layer_state / L_EFUNC) % 2 == 1) {
        logo[10] = 0x91;  //rune up right
        logo[11] = 0x92;  //rune down right
        logo[31] = 0xb1;  //rune up left
        logo[32] = 0xb2;  //rune down left
        logo[52] = 0xaf;  //rune up shift
        logo[53] = 0xb0;  //rune down right
      }else{
        logo[10] = 0x91;  //rune up right
        logo[11] = 0x92;  //rune down right
        logo[31] = 0xb1;  //rune up left
        logo[32] = 0xb2;  //rune down left
        logo[52] = 0x8f;  //rune up shift
        logo[53] = 0x90;  //rune down right
      }
    }else{
      if ((layer_state / L_EFUNC) % 2 == 1) {
        logo[10] = 0x91;  //rune up right
        logo[11] = 0x92;  //rune down right
        logo[31] = 0xb1;  //rune up left
        logo[32] = 0xb2;  //rune down left
        logo[52] = 0xaf;  //rune up shift
        logo[53] = 0xb0;  //rune down right
      }else{
        logo[10] = 0xd1;
        logo[11] = 0xd2;
        logo[31] = 0xd1;
        logo[32] = 0xd2;
        logo[52] = 0xd1;
        logo[53] = 0xd2;
      }
    }
  return logo;
}

