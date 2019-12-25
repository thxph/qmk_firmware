#pragma once
#include QMK_KEYBOARD_H

#ifdef TAP_DANCE_ENABLE
#    include "tap_dances_helpers.h"
#endif  // TAP_DANCE_ENABLE

#define TABHYPR MT(MOD_RCTL | MOD_RSFT | MOD_RALT | MOD_RGUI, KC_TAB)
#define ESCLCTL MT(MOD_LCTL, KC_ESC)
