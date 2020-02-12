#pragma once
#include QMK_KEYBOARD_H

#ifdef TAP_DANCE_ENABLE
#    include "tap_dances_helpers.h"
#endif  // TAP_DANCE_ENABLE

#define TABHYPR MT(MOD_RCTL | MOD_RSFT | MOD_RALT | MOD_RGUI, KC_TAB)
#define ESCLCTL MT(MOD_LCTL, KC_ESC)
#define MT_ZCTL MT(MOD_LCTL, KC_Z)
#define MT_ZGUI MT(MOD_LGUI, KC_Z)
#define BSPCCTL MT(MOD_RCTL, KC_BSPC)
#define SCLNALT MT(MOD_RALT, KC_SCLN)
#define SLSHGUI MT(MOD_RGUI, KC_SLSH)
#define ENT_SFT MT(MOD_RSFT, KC_ENT)
