/* Copyright 2020 ZSA Technology Labs, Inc <@zsa>
 * Copyright 2020 Jack Humbert <jack.humb@gmail.com>
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */



#include QMK_KEYBOARD_H
#include "quantum.h"
#include "version.h"
#include "thxph.h"
#include "keymap.h"

#ifdef RGB_MATRIX_ENABLE
#  include "rgb.h"
#endif


#ifdef TAP_DANCE_ENABLE
#  include "tap_dances.h"
#endif


// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_moonlander( \
            KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , _______,   _______, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, \
            TABLALT, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , _______,   _______, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , QUOTALT, \
            ESCLCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , _______,   _______, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, BSPCCTL, \
            KC_LSFT, MT_ZGUI, KC_X   , KC_C   , KC_V   , KC_B   ,                     KC_N   , KC_M   , KC_COMM, KC_DOT , SLSHGUI, KC_RSFT, \
            _______, _______, _______, TT_L2  , TT_L1  ,          _______,   _______,          TT_R1  , TT_R2  , _______, _______, _______, \
                                                KC_SPC , _______, _______,   _______, _______, KC_ENT                                    ),

    [_B1] = LAYOUT_moonlander( \
            _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______, \
            _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______, \
            _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______, \
            _______, KC_Z   , _______, _______, _______, _______,                     _______, _______, _______, _______, KC_SLSH, _______, \
            _______, _______, _______, _______, _______,          _______,   _______,          _______, _______, _______, _______, _______, \
                                                _______, _______, _______,   _______, _______, _______                                   ),

    [_L1] = LAYOUT_moonlander( \
            _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______, \
            _______, KC_LALT, KC_5   , KC_4   , KC_3   , _______, _______,   _______, KC_PGUP, KC_HOME, KC_END , KC_PGDN, KC_INS , _______ ,\
            _______, KC_LCTL, KC_2   , KC_1   , KC_0   , KC_9   , _______,   _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_DEL , _______, \
            _______, KC_LGUI, KC_8   , KC_7   , KC_6   , _______,                     _______, _______, _______, _______, _______, _______, \
            _______, _______, _______, _______, _______,          _______,   _______,          _______, _______, _______, _______, _______, \
                                                _______, _______, _______,   _______, _______, _______                                   ),

    [_R1] = LAYOUT_moonlander( \
            _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______, \
            TABLALT, _______, KC_LT  , KC_GRV , KC_GT  , KC_EXLM, _______,   _______, KC_AT  , KC_LBRC, KC_MINS, KC_RBRC, _______, _______ , \
            ESCLCTL, _______, KC_LCBR, KC_EQL , KC_RCBR, KC_HASH, _______,   _______, KC_UNDS, KC_LPRN, KC_DQT , KC_RPRN, _______, _______, \
            KC_LSFT, KC_PERC, KC_EXLM, KC_PLUS, KC_TILD, KC_CIRC,                     KC_AMPR, KC_ASTR, KC_DLR , KC_PIPE, KC_BSLS, _______, \
            _______, _______, _______, _______, _______,          _______,   _______,          _______, _______, _______, _______, _______, \
                                                _______, _______, _______,   _______, _______, _______                                   ),

    [_L2] = LAYOUT_moonlander( \
            _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______, \
            _______, _______, KC_F5  , KC_F4  , KC_F3  , KC_F11 , _______,   _______, _______, _______, _______, _______, _______, _______, \
            _______, _______, KC_F2  , KC_F1  , KC_F10 , KC_F9  , _______,   _______, _______, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, _______, \
            _______, _______, KC_F8  , KC_F7  , KC_F6  , KC_F12 ,                     _______, KC_RCTL, KC_RALT, KC_RGUI, KC_RSFT, _______, \
            _______, _______, _______, _______, _______,          _______,   _______,          _______, _______, _______, _______, _______, \
                                                _______, _______, _______,   _______, _______, _______                                   ),

    [_R2] = LAYOUT_moonlander( \
            _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______, \
            _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______, \
            _______, KC_LSFT, KC_LGUI, KC_LALT, KC_LCTL, _______, _______,   _______, _______, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, _______, \
            _______, KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL, _______,                     _______, KC_RCTL, KC_RALT, KC_RGUI, KC_RSFT, _______, \
            _______, _______, _______, _______, _______,          _______,   _______,          _______, _______, _______, _______, _______, \
                                                _______, _______, _______,   _______, _______, _______                                   ),

    [_CONTROL] = LAYOUT_moonlander( \
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGBETOG, \
            XXXXXXX, DF(_BASE), DF(_B1), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
            _______, _______, _______, _______, _______,          _______,   _______,          _______, _______, _______, _______, _______, \
                                                _______, _______, _______,   _______, _______, _______                                   ),

    [_CONFIG] = LAYOUT_moonlander( \
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET  , \
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
            _______, _______, _______, _______, _______,          _______,   _______,          _______, _______, _______, _______, _______, \
                                                _______, _______, _______,   _______, _______, _______                                   ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case VRSN:
                SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
                return false;
        }
    }
//   switch (keycode) {
//       case ON_BASE:
//           if (record->event.pressed) {
//               DF(_BASE);
//           }
//           return false;
//           break;
//       case ON_B1:
//           if (record->event.pressed) {
//               DF(_B1);
//           }
//           return false;
//           break;
//   }
#ifdef RGB_MATRIX_ENABLE
    if (!process_rgb_keycodes(keycode, record)) {
        return false;
    }
#endif

    return true;
}


layer_state_t layer_state_set_user(layer_state_t state) {

    state = update_tri_layer_state(state, _L1, _R1, _CONTROL);
    state = update_tri_layer_state(state, _CONTROL, _R2, _CONFIG);

#ifdef RGB_MATRIX_ENABLE
    handle_layer_changes(state);
#endif

    return state;
}
