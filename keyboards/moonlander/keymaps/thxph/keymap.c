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
#  include "rgb_underglow.h"
#endif


#ifdef TAP_DANCE_ENABLE
#  include "tap_dances.h"
#endif


// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_moonlander( \
			C(KC_C), C(KC_X), KC_COLN, KC_TAB , A(KC_X), C(KC_U), _______,   _______, C(KC_H), KC_2   , KC_DEL , C(KC_E), C(KC_K), C(KC_G), \
			TABHYPR, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , _______,   _______, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_QUOT, \
			ESCLCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , _______,   _______, KC_H   , KC_J   , KC_K   , KC_L   , SCLNALT, BSPCCTL, \
			KC_LSFT, MT_ZGUI, KC_X   , KC_C   , KC_V   , KC_B   ,                     KC_N   , KC_M   , KC_COMM, KC_DOT , SLSHGUI, KC_RSFT, \
			_______, _______, _______, _______, TT_LOWR,          _______,   _______,          TT_RAIS, _______, TD_CTRL, _______, _______, \
			                           KC_SPC , _______, KC_LALT,                     _______, _______, KC_ENT                              ),

	[_LAY1] = LAYOUT_moonlander( \
			KC_GRV , KC_9   , KC_7   , KC_1   , KC_3   , KC_5   , _______,   _______, KC_4   , KC_2   , KC_0   , KC_6   , KC_8   , KC_MINS, \
			TABHYPR, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , _______,   _______, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_QUOT, \
			ESCLCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , _______,   _______, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, _______, \
			KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                     KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT, \
			_______, _______, _______, _______, TT_LOWR,          _______,   _______,          TT_RAIS, _______, TD_CTRL, _______, _______, \
			                           KC_SPC , _______, KC_LALT,                     _______, _______, KC_ENT                              ),

	[_LOWER] = LAYOUT_moonlander( \
			KC_GRV , KC_9   , KC_7   , KC_1   , KC_3   , KC_5   , _______,   _______, KC_4   , KC_2   , KC_0   , KC_6   , KC_8   , KC_MINS, \
			TABHYPR, _______, KC_5   , KC_4   , KC_3   , _______, _______,   _______, KC_PGUP, KC_HOME, KC_END , KC_PGDN, KC_INS , KC_DEL , \
			ESCLCTL, KC_GRV , KC_2   , KC_1   , KC_0   , KC_9   , _______,   _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______, \
			KC_LSFT, KC_TILD, KC_8   , KC_7   , KC_6   , _______,                     _______, KC_MINS, _______, _______, _______, KC_RSFT, \
			_______, _______, _______, _______, TT_LOWR,          _______,   _______,          TT_RAIS, _______, TD_CTRL, _______, _______, \
			                           KC_SPC , _______, KC_LALT,                     _______, _______, KC_ENT                              ),

	[_RAISE] = LAYOUT_moonlander( \
			KC_GRV , KC_9   , KC_7   , KC_1   , KC_3   , KC_5   , _______,   _______, KC_4   , KC_2   , KC_0   , KC_6   , KC_8   , KC_MINS, \
			TABHYPR, KC_GRV , KC_LT  , KC_GRV , KC_GT  , KC_EXLM, _______,   _______, KC_AT  , KC_LBRC, KC_MINS, KC_RBRC, KC_MINS, KC_DEL , \
			ESCLCTL, KC_BSLS, KC_LCBR, KC_EQL , KC_RCBR, KC_HASH, _______,   _______, KC_UNDS, KC_LPRN, KC_DQT , KC_RPRN, KC_COLN, _______, \
			KC_LSFT, KC_PERC, KC_EXLM, KC_PLUS, KC_TILD, KC_CIRC,                     KC_AMPR, KC_ASTR, KC_DLR , KC_PIPE, KC_QUES, KC_RSFT, \
			_______, _______, _______, _______, TT_LOWR,          _______,   _______,          TT_RAIS, _______, TD_CTRL, _______, _______, \
			                           KC_SPC , _______, KC_LALT,                     _______, _______, KC_ENT                              ),

	[_FUNCTION] = LAYOUT_moonlander( \
			KC_GRV , KC_9   , KC_7   , KC_1   , KC_3   , KC_5   , _______,   _______, KC_4   , KC_2   , KC_0   , KC_6   , KC_8   , KC_MINS, \
			TABHYPR, _______, KC_F5  , KC_F4  , KC_F3  , KC_F12 , _______,   _______, _______, _______, _______, _______, _______, KC_DEL , \
			ESCLCTL, _______, KC_F2  , KC_F1  , KC_F10 , KC_F9  , _______,   _______, _______, KC_RCTL, KC_RALT, _______, _______, _______, \
			KC_LSFT, KC_LCTL, KC_F8  , KC_F7  , KC_F6  , KC_F11 ,                     _______, _______, _______, _______, _______, _______, \
			_______, _______, _______, _______, TT_LOWR,          _______,   _______,          TT_RAIS, _______, TD_CTRL, _______, _______, \
			                           KC_SPC , _______, KC_LALT,                     _______, _______, KC_ENT                              ),

	[_CONTROL] = LAYOUT_moonlander( \
			XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGBETOG, \
			XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
			XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
			XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
			XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,   XXXXXXX,          XXXXXXX, XXXXXXX, TD_CTRL, XXXXXXX, XXXXXXX, \
			                           XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX                              ),

	[_CONFIG] = LAYOUT_moonlander( \
			XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, RESET  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
			XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
			XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGBETOG, \
			XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
			XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,   XXXXXXX,          XXXXXXX, XXXXXXX, TC_CTRL, XXXXXXX, XXXXXXX, \
			                           XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX                              ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	if (record->event.pressed) {
		switch (keycode) {
			case VRSN:
				SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
				return false;
		}
	}
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

  #ifdef RGB_MATRIX_ENABLE
    if (!process_rgb_keycodes(keycode, record)) {
        return false;
    }
  #endif

  return true;
}


layer_state_t layer_state_set_user(layer_state_t state) {

  state = update_tri_layer_state(state, _LOWER, _RAISE, _FUNCTION);

  #ifdef RGB_MATRIX_ENABLE
    handle_layer_changes(state);
  #endif

  return state;
}
