#pragma once
#include QMK_KEYBOARD_H

#include "thxph.h"

#define _BASE 0
#define _B1 1
#define _L1 2
#define _R1 3
#define _L2 4
#define _R2 5
#define _CONTROL 9
#define _CONFIG 15

#define TT_L1 TT(_L1)
#define TT_L2 TT(_L2)
#define TT_R1 TT(_R1)
#define TT_R2 TT(_R2)


enum custom_keycodes {
  ON_BASE = SAFE_RANGE,
  ON_B1,

  RGBETOG,
  RGBEMOD,
  RGBESPI,
  RGBPSPI,
  RGBESPD,
  RGBPSPD

};
