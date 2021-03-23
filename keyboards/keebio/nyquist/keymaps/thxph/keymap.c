#include QMK_KEYBOARD_H
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

[_BASE] = LAYOUT( \
  KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , \
  TABHYPR, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_QUOT, \
  ESCLCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , SCLNALT, BSPCCTL, \
  KC_LSFT, MT_ZGUI, KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , SLSHGUI, KC_RSFT, \
  KC_LCTL, KC_LGUI, TT_CTRL, KC_LALT, TT_LOWR, KC_SPC , KC_ENT , TT_RAIS, KC_RALT, TD_CTRL, KC_RGUI, KC_LEAD  \
),

[_GAME] = LAYOUT( \
  KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,    KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, \
  TABHYPR, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,    KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_QUOT, \
  ESCLCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,    KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, _______, \
  KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,    KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT, \
  KC_LCTL, KC_LGUI, TT_CTRL, KC_LALT, TT_LOWR, KC_SPC ,    KC_ENT , TT_RAIS, KC_RALT, TD_CTRL, KC_RGUI, KC_LEAD  \
),

[_WINX] = LAYOUT( \
  KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , \
  KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_QUOT, \
  ESCLCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , SCLNALT, BSPCCTL, \
  KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT, \
  KC_LCTL, KC_LGUI, TT_CTRL, KC_LALT, TT_LOWR, KC_SPC , KC_ENT , TT_RAIS, KC_RALT, TD_CTRL, KC_RGUI, KC_LEAD  \
),

[_LOWER] = LAYOUT( \
  KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  ,    KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , \
  TABHYPR, KC_MINS, KC_5   , KC_4   , KC_3   , KC_COMM,    KC_PGUP, KC_HOME, KC_END , KC_PGDN, KC_INS , KC_DEL , \
  ESCLCTL, KC_GRV , KC_2   , KC_1   , KC_0   , KC_9   ,    KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______, \
  KC_LSFT, KC_TILD, KC_8   , KC_7   , KC_6   , KC_DOT ,    KC_F13 , KC_F14 , KC_F15 , KC_F16 , KC_F17 , KC_RSFT, \
  KC_LCTL, KC_LGUI, TT_CTRL, KC_LALT, TT_LOWR, KC_SPC ,    KC_ENT , TT_RAIS, KC_RALT, TD_CTRL, KC_RGUI, KC_LEAD  \
),

[_RAISE] = LAYOUT( \
  KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  ,    KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , \
  TABHYPR, KC_GRV , KC_LT  , KC_GRV , KC_GT  , KC_EXLM,    KC_AT  , KC_LBRC, KC_MINS, KC_RBRC, KC_MINS, KC_DEL , \
  ESCLCTL, KC_BSLS, KC_LCBR, KC_EQL , KC_RCBR, KC_HASH,    KC_UNDS, KC_LPRN, KC_DQT , KC_RPRN, KC_COLN, _______, \
  KC_LSFT, KC_PERC, KC_EXLM, KC_PLUS, KC_TILD, KC_CIRC,    KC_AMPR, KC_ASTR, KC_DLR , KC_PIPE, KC_QUES, KC_RSFT, \
  KC_LCTL, KC_LGUI, TT_CTRL, KC_LALT, TT_LOWR, KC_SPC ,    KC_ENT , TT_RAIS, KC_RALT, TD_CTRL, KC_RGUI, KC_LEAD  \
),

[_FUNCTION] = LAYOUT( \
  KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  ,    KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , \
  TABHYPR, _______, KC_F5  , KC_F4  , KC_F3  , KC_F12 ,    _______, _______, _______, _______, _______, KC_DEL , \
  ESCLCTL, _______, KC_F2  , KC_F1  , KC_F10 , KC_F9  ,    _______, KC_RCTL, KC_RALT, _______, _______, _______, \
  KC_LSFT, KC_LCTL, KC_F8  , KC_F7  , KC_F6  , KC_F11 ,    _______, _______, _______, _______, _______, _______, \
  KC_LCTL, KC_LGUI, TT_CTRL, KC_LALT, TT_LOWR, KC_SPC ,    KC_ENT , TT_RAIS, KC_RALT, TD_CTRL, KC_RGUI, KC_LEAD  \
),

[_CONTROL] = LAYOUT( \
  KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , \
  KC_F13 , KC_F14 , KC_F15 , KC_F16 , KC_F17 , KC_F18 , KC_F19 , KC_F20 , KC_F21 , KC_F22 , KC_F23 , KC_F24 , \
  ESCLCTL, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  KC_LSFT, DF_BASE, DF_GAME, DF_WINX, DF_CTRL, _______, _______, _______, _______, _______, _______, RGBETOG, \
  KC_LCTL, KC_LGUI, TT_CTRL, KC_LALT, TT_LOWR, KC_SPC , KC_ENT , TT_RAIS, KC_RALT, TD_CTRL, KC_RGUI, KC_LEAD  \
),

[_CONFIG] = LAYOUT( \
  RGBETOG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET  , \
  TABHYPR, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  ESCLCTL, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  KC_LSFT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  KC_LCTL, KC_LGUI, TT_CTRL, KC_LALT, TT_LOWR, KC_SPC , KC_ENT , TT_RAIS, KC_RALT, TD_CTRL, KC_RGUI, KC_LEAD  \
),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

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
