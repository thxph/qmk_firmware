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
        KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                    KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, \
        TABLALT, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                    KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , QUOTALT, \
        ESCLCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                    KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, BSPCCTL, \
        KC_LSFT, MT_ZGUI, KC_X   , KC_C   , KC_V   , KC_B   , _______,  _______, KC_N   , KC_M   , KC_COMM, KC_DOT , SLSHGUI, KC_RSFT, \
        /*                               */ TT_L2  , TT_L1  , KC_SPC ,  KC_ENT , TT_R1  , TT_R2 /*                                  */ ),

    [_B1] = LAYOUT( \
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______, \
        _______, KC_Z   , _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, KC_SLSH, _______, \
        /*                               */ _______, _______, _______,  _______, _______, _______  /*                               */ ),

    [_L1] = LAYOUT( \
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______, \
        _______, KC_LALT, KC_5   , KC_4   , KC_3   , _______,                    KC_PGUP, KC_HOME, KC_END , KC_PGDN, KC_INS , _______ ,\
        _______, KC_LCTL, KC_2   , KC_1   , KC_0   , KC_9   ,                    KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_DEL , _______, \
        _______, KC_LGUI, KC_8   , KC_7   , KC_6   , _______, _______,  _______, _______, _______, _______, _______, _______, _______, \
                                            _______, _______, _______,  _______, _______, _______                                      ),

    [_R1] = LAYOUT( \
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______, \
        TABLALT, _______, KC_LT  , KC_GRV , KC_GT  , KC_EXLM,                    KC_AT  , KC_LBRC, KC_MINS, KC_RBRC, _______, _______, \
        ESCLCTL, KC_BSLS, KC_LCBR, KC_EQL , KC_RCBR, KC_HASH,                    KC_UNDS, KC_LPRN, KC_DQT , KC_RPRN, _______, _______, \
        KC_LSFT, KC_PERC, KC_EXLM, KC_PLUS, KC_TILD, KC_CIRC, _______,  _______, KC_AMPR, KC_ASTR, KC_DLR , KC_PIPE, _______, _______, \
                                            _______, _______, _______,  _______, _______, _______                                      ),

    [_L2] = LAYOUT( \
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______, \
        _______, _______, KC_F5  , KC_F4  , KC_F3  , KC_F11 ,                    _______, _______, _______, _______, _______, _______, \
        _______, _______, KC_F2  , KC_F1  , KC_F10 , KC_F9  ,                    _______, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, _______, \
        _______, _______, KC_F8  , KC_F7  , KC_F6  , KC_F12 , _______,  _______, _______, KC_RCTL, KC_RALT, KC_RGUI, KC_RSFT, _______, \
                                            _______, _______, _______,  _______, _______, _______                                      ),

    [_R2] = LAYOUT( \
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______, \
        _______, KC_LSFT, KC_LGUI, KC_LALT, KC_LCTL, _______,                    _______, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, _______, \
        _______, KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL, _______, _______,  _______, _______, KC_RCTL, KC_RALT, KC_RGUI, KC_RSFT, _______, \
                                            _______, _______, _______,  _______, _______, _______                                      ),

    [_CONTROL] = LAYOUT( \
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______, \
        _______, _______, KC_F5  , KC_F4  , KC_F3  , KC_F11 ,                    _______, _______, _______, _______, _______, _______, \
        _______, _______, KC_F2  , KC_F1  , KC_F10 , KC_F9  ,                    _______, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, _______, \
        _______, _______, KC_F8  , KC_F7  , KC_F6  , KC_F12 , _______,  _______, _______, KC_RCTL, KC_RALT, KC_RGUI, KC_RSFT, _______, \
                                            _______, _______, _______,  _______, _______, _______                                      ),

    [_CONFIG] = LAYOUT( \
        XXXXXXX, XXXXXXX  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
        XXXXXXX, RGBETOG  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET  , \
        XXXXXXX, DF(_BASE), DF(_B1), XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
        XXXXXXX, XXXXXXX  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
                                              _______, _______, _______,  _______, _______, _______                                      ),


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

  state = update_tri_layer_state(state, _L1, _R1, _CONTROL);
  state = update_tri_layer_state(state, _CONTROL, _R2, _CONFIG);

  #ifdef RGBLIGHT_ENABLE
    handle_layer_changes(state);
  #endif

  return state;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    switch (get_highest_layer(layer_state)) {
        case _CONFIG:
            break;
        case _CONTROL:
            break;
        case _R1:
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
        case _L1:
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
        default:
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
    }
    return false;
}
