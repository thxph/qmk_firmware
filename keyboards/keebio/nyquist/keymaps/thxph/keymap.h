#pragma once
#include QMK_KEYBOARD_H

#include "thxph.h"

#define _BASE 0
#define _QWERTY 1
#define _LOWER 2
#define _RAISE 3
#define _CONTROL 9
#define _CONFIG 15

#define MO_LOWR MO(_LOWER)
#define MO_RAIS MO(_RAISE)
#define MO_CTRL MO(_CONTROL)

#define TG_QWER TG(_QWERTY)
#define TG_LOWR TG(_LOWER)
#define TG_RAIS TG(_RAISE)
#define TG_CTRL TG(_CONTROL)

#define TABHYPR MT(MOD_RCTL | MOD_RSFT | MOD_RALT | MOD_RGUI, KC_TAB)
#define ESCLCTL MT(MOD_LCTL, KC_ESC)


enum custom_keycodes {
  ON_BASE = SAFE_RANGE,
  ON_QWER,
  ON_CTRL,

  RGBETOG,
  RGBEMOD

};
