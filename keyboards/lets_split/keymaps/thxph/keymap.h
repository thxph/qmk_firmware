#pragma once
#include QMK_KEYBOARD_H

#include "thxph.h"

#define _BASE 0
#define _LAY1 1
#define _LOWER 2
#define _RAISE 3
#define _CONTROL 9
#define _CONFIG 15

#define MO_LOWR MO(_LOWER)
#define MO_RAIS MO(_RAISE)
#define MO_CTRL MO(_CONTROL)

#define TT_LOWR TT(_LOWER)
#define TT_RAIS TT(_RAISE)

#define TG_LAY1 TG(_LAY1)
#define TG_LOWR TG(_LOWER)
#define TG_RAIS TG(_RAISE)
#define TG_CTRL TG(_CONTROL)

#define LT_LSPC LT(_LOWER, KC_SPACE)
#define LT_RENT LT(_RAISE, KC_ENTER)


enum custom_keycodes {
  ON_BASE = SAFE_RANGE,
  ON_LAY1,
  ON_CTRL,

  RGBETOG,
  RGBEMOD

};
