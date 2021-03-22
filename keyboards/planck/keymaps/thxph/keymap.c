#include QMK_KEYBOARD_H
#include "muse.h"
#include "thxph.h"
#include "keymap.h"

#ifdef RGBLIGHT_ENABLE
#  include "rgb_underglow.h"
#endif

#ifdef TAP_DANCE_ENABLE
#  include "tap_dances.h"
#endif

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* KC_LGUI, KC_LALT, KC_LCTL, KC_LALT, TT_LOWR, KC_SPC ,    KC_ENT , TT_RAIS, LCA_T(KC_TAB), KC_RALT, TD_CTRL, KC_LEAD \ */

[_BASE] = LAYOUT_planck_grid( \
  TABHYPR, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_QUOT, \
  ESCLCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , SCLNALT, BSPCCTL, \
  KC_LSFT, MT_ZGUI, KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , SLSHGUI, KC_RSFT, \
  KC_LCTL, KC_LGUI, _______, KC_LALT, TT_LOWR, KC_SPC , KC_ENT , TT_RAIS, KC_RALT, TD_CTRL, KC_RGUI, KC_RCTL  ),

[_GAME] = LAYOUT_planck_grid( \
  KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_QUOT, \
  KC_ESC , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_BSPC, \
  KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT, \
  KC_LCTL, KC_LGUI, _______, KC_LALT, TT_LOWR, KC_SPC , KC_ENT , TT_RAIS, KC_RALT, TD_CTRL, KC_RGUI, KC_RCTL  ),

[_WINX] = LAYOUT_planck_grid( \
  KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_QUOT, \
  ESCLCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , SCLNALT, BSPCCTL, \
  KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT, \
  KC_LCTL, KC_LGUI, _______, KC_LALT, TT_LOWR, KC_SPC , KC_ENT , TT_RAIS, KC_RALT, TD_CTRL, KC_RGUI, KC_RCTL  ),

[_LOWER] = LAYOUT_planck_grid( \
  TABHYPR, _______, KC_5   , KC_4   , KC_3   , _______, KC_PGUP, KC_HOME, KC_END , KC_PGDN, KC_INS , KC_DEL , \
  ESCLCTL, KC_GRV , KC_2   , KC_1   , KC_0   , KC_9   , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______, \
  KC_LSFT, KC_TILD, KC_8   , KC_7   , KC_6   , _______, _______, KC_MINS, _______, _______, _______, KC_RSFT, \
  KC_LCTL, KC_LGUI, _______, KC_LALT, TT_LOWR, KC_SPC , KC_ENT , TT_RAIS, KC_RALT, TD_CTRL, KC_RGUI, KC_RCTL  ),

[_RAISE] = LAYOUT_planck_grid( \
  TABHYPR, KC_GRV , KC_LT  , KC_GRV , KC_GT  , KC_EXLM, KC_AT  , KC_LBRC, KC_MINS, KC_RBRC, KC_MINS, KC_DEL , \
  ESCLCTL, KC_BSLS, KC_LCBR, KC_EQL , KC_RCBR, KC_HASH, KC_UNDS, KC_LPRN, KC_DQT , KC_RPRN, KC_COLN, _______, \
  KC_LSFT, KC_PERC, KC_EXLM, KC_PLUS, KC_TILD, KC_CIRC, KC_AMPR, KC_ASTR, KC_DLR , KC_PIPE, KC_QUES, KC_RSFT, \
  KC_LCTL, KC_LGUI, _______, KC_LALT, TT_LOWR, KC_SPC , KC_ENT , TT_RAIS, KC_RALT, TD_CTRL, KC_RGUI, KC_RCTL  ),

[_FUNCTION] = LAYOUT_planck_grid( \
  TABHYPR, _______, KC_F5  , KC_F4  , KC_F3  , KC_F12 , _______, _______, _______, _______, _______, KC_DEL , \
  ESCLCTL, _______, KC_F2  , KC_F1  , KC_F10 , KC_F9  , _______, KC_RCTL, KC_RALT, _______, _______, _______, \
  KC_LSFT, KC_LCTL, KC_F8  , KC_F7  , KC_F6  , KC_F11 , _______, _______, _______, _______, _______, _______, \
  KC_LCTL, KC_LGUI, _______, KC_LALT, TT_LOWR, KC_SPC , KC_ENT , TT_RAIS, KC_RALT, TD_CTRL, KC_RGUI, KC_RCTL  ),

[_CONTROL] = LAYOUT_planck_grid( \
  TABHYPR, DF(_BASE), KC_F5  , KC_F4  , KC_F3  , KC_F12 , RGBETOG, _______, _______, _______, _______, _______  , \
  ESCLCTL, DF(_GAME), KC_F2  , KC_F1  , KC_F10 , KC_F9  , RGBEMOD, _______, _______, _______, _______, _______  , \
  KC_LSFT, DF(_WINX), KC_F8  , KC_F7  , KC_F6  , KC_F11 , _______, _______, _______, _______, _______, DF(_CONTROL), \
  KC_LCTL, KC_LGUI,   _______, KC_LALT, TT_LOWR, KC_SPC , KC_ENT , TT_RAIS, KC_RALT, TD_CTRL, KC_RGUI, KC_RCTL    ),

[_CONFIG] = LAYOUT_planck_grid( \
  TABHYPR, _______, KC_F5  , KC_F4  , KC_F3  , KC_F12 , _______, _______, _______, _______, _______, _______, \
  ESCLCTL, _______, KC_F2  , KC_F1  , KC_F10 , KC_F9  , _______, _______, RGB_MOD, RGB_VAD, RGB_VAI, RESET  , \
  KC_LSFT, _______, KC_F8  , KC_F7  , KC_F6  , KC_F11 , _______, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, ON_CTRL, \
  KC_LCTL, KC_LGUI, _______, KC_LALT, TT_LOWR, KC_SPC , KC_ENT , TT_RAIS, KC_RALT, TD_CTRL, KC_RGUI, KC_RCTL  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ON_BASE:
      if (record->event.pressed) {
      }
      return false;
      break;
    case ON_GAME:
      if (record->event.pressed) {
      }
      return false;
      break;
    case ON_WINX:
      if (record->event.pressed) {
      }
      return false;
      break;
    case ON_CTRL:
      if (record->event.pressed) {
      }
      return false;
      break;
  }

  #ifdef RGBLIGHT_ENABLE
    if (!process_rgb_keycodes(keycode, record)) {
        return false;
    }
  #endif

  return true;
}


layer_state_t layer_state_set_user(layer_state_t state) {

  state = update_tri_layer_state(state, _LOWER, _RAISE, _FUNCTION);

  #ifdef RGBLIGHT_ENABLE
    handle_layer_changes(state);
  #endif

  return state;
}
