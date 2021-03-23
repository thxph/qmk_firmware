#pragma once
#include QMK_KEYBOARD_H

#include "thxph.h"

#define _BASE 0
#define _GAME 1
#define _WINX 2

#define _LOWER 4
#define _RAISE 5

#define _FUNCTION 7
#define _CONTROL 9
#define _CONFIG 15

#define DF_BASE DF(_BASE)
#define DF_GAME DF(_GAME)
#define DF_WINX DF(_WINX)
#define DF_CTRL DF(_CONTROL)

#define MO_LOWR MO(_LOWER)
#define MO_RAIS MO(_RAISE)
#define MO_CTRL MO(_CONTROL)

#define TT_LOWR TT(_LOWER)
#define TT_RAIS TT(_RAISE)
#define TT_CTRL TT(_CONTROL)

#define TG_GAME TG(_GAME)
#define TG_WINX TG(_WINX)
#define TG_LOWR TG(_LOWER)
#define TG_RAIS TG(_RAISE)
#define TG_CTRL TG(_CONTROL)

#define TD_CTRL TD(T_CTRL)


enum custom_keycodes {
  ON_BASE = SAFE_RANGE,
  ON_GAME,
  ON_WINX,
  ON_CTRL,

  RGBETOG,
  RGBEMOD

};
