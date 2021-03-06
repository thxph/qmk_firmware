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

/* KC_LGUI, KC_LALT, KC_LCTL, KC_LALT, TT_LOWR, KC_SPC ,    KC_ENT , TT_RAIS, LCA_T(KC_TAB), KC_RALT, TD_CTRL, KC_LEAD \ */

[_BASE] = LAYOUT( \
  C(KC_C), C(KC_X), KC_COLN, KC_TAB , A(KC_X), C(KC_U),                     C(KC_H), KC_2   , KC_DEL , C(KC_E), C(KC_K), C(KC_G), \
  TABHYPR, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                     KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_QUOT, \
  ESCLCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                     KC_H   , KC_J   , KC_K   , KC_L   , SCLNALT, BSPCCTL, \
  KC_LSFT, MT_ZGUI, KC_X   , KC_C   , KC_V   , KC_B   , _______,   _______, KC_N   , KC_M   , KC_COMM, KC_DOT , SLSHGUI, KC_RSFT, \
                             KC_LALT, TT_LOWR, KC_SPC ,                     KC_ENT , TT_RAIS, TD_CTRL                             ),

[_LAY1] = LAYOUT( \
  KC_GRV , KC_9   , KC_7   , KC_1   , KC_3   , KC_5   ,                     KC_4   , KC_2   , KC_0   , KC_6   , KC_8   , KC_MINS, \
  TABHYPR, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                     KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_QUOT, \
  ESCLCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                     KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, _______, \
  KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , _______,   _______, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT, \
                             KC_LALT, TT_LOWR, KC_SPC ,                     KC_ENT , TT_RAIS, TD_CTRL                             ),

[_LOWER] = LAYOUT( \
  KC_GRV , KC_9   , KC_7   , KC_1   , KC_3   , KC_5   ,                     KC_4   , KC_2   , KC_0   , KC_6   , KC_8   , KC_MINS, \
  TABHYPR, _______, KC_5   , KC_4   , KC_3   , _______,                     KC_PGUP, KC_HOME, KC_END , KC_PGDN, KC_INS , KC_DEL , \
  ESCLCTL, KC_GRV , KC_2   , KC_1   , KC_0   , KC_9   ,                     KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______, \
  KC_LSFT, KC_TILD, KC_8   , KC_7   , KC_6   , _______, _______,   _______, _______, KC_MINS, _______, _______, _______, KC_RSFT, \
                             KC_LALT, TT_LOWR, KC_SPC ,                     KC_ENT , TT_RAIS, TD_CTRL                             ),

[_RAISE] = LAYOUT( \
  KC_GRV , KC_9   , KC_7   , KC_1   , KC_3   , KC_5   ,                     KC_4   , KC_2   , KC_0   , KC_6   , KC_8   , KC_MINS, \
  TABHYPR, KC_GRV , KC_LT  , KC_GRV , KC_GT  , KC_EXLM,                     KC_AT  , KC_LBRC, KC_MINS, KC_RBRC, KC_MINS, KC_DEL , \
  ESCLCTL, KC_BSLS, KC_LCBR, KC_EQL , KC_RCBR, KC_HASH,                     KC_UNDS, KC_LPRN, KC_DQT , KC_RPRN, KC_COLN, _______, \
  KC_LSFT, KC_PERC, KC_EXLM, KC_PLUS, KC_TILD, KC_CIRC, _______,   _______, KC_AMPR, KC_ASTR, KC_DLR , KC_PIPE, KC_QUES, KC_RSFT, \
                             KC_LALT, TT_LOWR, KC_SPC ,                     KC_ENT , TT_RAIS, TD_CTRL                             ),

[_FUNCTION] = LAYOUT( \
  KC_GRV , KC_9   , KC_7   , KC_1   , KC_3   , KC_5   ,                     KC_4   , KC_2   , KC_0   , KC_6   , KC_8   , KC_MINS, \
  TABHYPR, _______, KC_F5  , KC_F4  , KC_F3  , KC_F12 ,                     _______, _______, _______, _______, _______, KC_DEL , \
  ESCLCTL, _______, KC_F2  , KC_F1  , KC_F10 , KC_F11 ,                     _______, KC_RCTL, KC_RALT, _______, _______, _______, \
  KC_LSFT, KC_LCTL, KC_F8  , KC_F7  , KC_F6  , _______, _______,   _______, _______, _______, _______, _______, _______, _______, \
                             KC_LALT, TT_LOWR, KC_SPC ,                     KC_ENT , TT_RAIS, TD_CTRL                             ),

[_CONTROL] = LAYOUT( \
  KC_GRV , KC_9   , KC_7   , KC_1   , KC_3   , KC_5   ,                     KC_4   , KC_2   , KC_0   , KC_6   , KC_8   , KC_MINS, \
  TABHYPR, _______, KC_F5  , KC_F4  , KC_F3  , KC_F12 ,                     _______, _______, _______, _______, _______, _______, \
  ESCLCTL, ON_LAY1, KC_F2  , KC_F1  , KC_F10 , KC_F11 ,                     RGB_MOD, _______, _______, RGB_VAD, RGB_VAI, RESET  , \
  KC_LSFT, ON_BASE, KC_F8  , KC_F7  , KC_F6  , RGBETOG, _______,   _______, RGBEMOD, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, ON_CTRL, \
                             KC_LALT, TT_LOWR, KC_SPC ,                     KC_ENT , TT_RAIS, TD_CTRL                             ),

[_CONFIG] = LAYOUT( \
  KC_GRV , KC_9   , KC_7   , KC_1   , KC_3   , KC_5   ,                     KC_4   , KC_2   , KC_0   , KC_6   , KC_8   , KC_MINS, \
  TABHYPR, _______, KC_F5  , KC_F4  , KC_F3  , KC_F12 ,                     _______, _______, _______, _______, _______, _______, \
  ESCLCTL, ON_LAY1, KC_F2  , KC_F1  , KC_F10 , KC_F11 ,                     RGB_MOD, _______, _______, RGB_VAD, RGB_VAI, RESET  , \
  KC_LSFT, ON_BASE, KC_F8  , KC_F7  , KC_F6  , RGBETOG, _______,   _______, RGBEMOD, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, ON_CTRL, \
                             KC_LALT, TT_LOWR, KC_SPC ,                     KC_ENT , TT_RAIS, TD_CTRL                             ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ON_BASE:
      if (record->event.pressed) {
        layer_off(_CONTROL);
        layer_off(_LOWER);
        layer_off(_RAISE);
        layer_off(_LAY1);
        layer_on(_BASE);
      }
      return false;
      break;
    case ON_LAY1:
      if (record->event.pressed) {
        layer_off(_CONTROL);
        layer_off(_LOWER);
        layer_off(_RAISE);
        layer_off(_BASE);
        layer_on(_LAY1);
      }
      return false;
      break;
    case ON_CTRL:
      if (record->event.pressed) {
        layer_off(_LOWER);
        layer_off(_RAISE);
        layer_off(_LAY1);
        layer_off(_BASE);
        layer_on(_CONTROL);
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

void encoder_update_user(uint8_t index, bool clockwise) {
  switch (get_highest_layer(layer_state)) {
    case _CONTROL:
      break;
    case _RAISE:
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_RIGHT);
        } else {
            tap_code(KC_LEFT);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
      break;
    case _LOWER:
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_RIGHT);
        } else {
            tap_code(KC_LEFT);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
      break;
    case _LAY1:
      break;
    case _FUNCTION:
      break;
    case _BASE:
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_DOWN);
        } else {
            tap_code(KC_UP);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
      break;
  }
}
