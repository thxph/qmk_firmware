/* Copyright 2022 ZhaQian
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

#include "sp67.h"

#define _BASE    0
#define _ENT     1
#define _SIMPLE  2
#define _L1      3
#define _R1      4
#define _MODS    5
#define _CONTROL 6

#define LCTL_ESC  LCTL_T(KC_ESC)
#define RCTL_QUOT RCTL_T(KC_QUOT)
#define RALT_SEMI RALT_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE] = LAYOUT(
		KC_GRV     , KC_1       , KC_2       , KC_3       , KC_4       , KC_5       , KC_6       , KC_7       , KC_8       , KC_9       , KC_0       , KC_MINS    , KC_EQL     , KC_BSPC    , KC_HOME     ,
		KC_TAB     , KC_Q       , KC_W       , KC_E       , KC_R       , KC_T       , KC_Y       , KC_U       , KC_I       , KC_O       , KC_P       , KC_LBRC    , KC_RBRC    , KC_BSLS    , MO(_CONTROL),
		LCTL_ESC   , KC_A       , KC_S       , KC_D       , KC_F       , KC_G       , KC_H       , KC_J       , KC_K       , KC_L       , RALT_SEMI  , RCTL_QUOT  , KC_ENT                  , KC_PGDN     ,
		KC_LSFT    , KC_Z       , KC_X       , KC_C       , KC_V       , KC_B       , KC_N       , KC_M       , KC_COMM    , KC_DOT     , KC_SLSH    , XXXXXXX    , KC_RSFT    , KC_UP      , KC_END      ,
		MO(_MODS)  , MO(_L1)    , MO(_R1)    , KC_SPC                                                                      , MO(_R1)    , MO(_L1)    , XXXXXXX    , KC_LEFT    , KC_DOWN    , KC_RIGHT   ),

	[_ENT] = LAYOUT(
		KC_ESC     , KC_1       , KC_2       , KC_3       , KC_4       , KC_5       , KC_6       , KC_7       , KC_8       , KC_9       , KC_0       , KC_MINS    , KC_EQL     , KC_BSPC    , KC_HOME     ,
		KC_TAB     , KC_Q       , KC_W       , KC_E       , KC_R       , KC_T       , KC_Y       , KC_U       , KC_I       , KC_O       , KC_P       , KC_LBRC    , KC_RBRC    , KC_BSLS    , MO(_CONTROL),
		KC_LCTL    , KC_A       , KC_S       , KC_D       , KC_F       , KC_G       , KC_H       , KC_J       , KC_K       , KC_L       , KC_SCLN    , KC_QUOT    , KC_ENT                  , KC_PGDN     ,
		KC_LSFT    , KC_Z       , KC_X       , KC_C       , KC_V       , KC_B       , KC_N       , KC_M       , KC_COMM    , KC_DOT     , KC_SLSH    , XXXXXXX    , KC_RSFT    , KC_UP      , KC_END      ,
		MO(_MODS)  , MO(_L1)    , MO(_R1)    , KC_SPC                                                                      , MO(_R1)    , MO(_L1)    , XXXXXXX    , KC_LEFT    , KC_DOWN    , KC_RIGHT   ),

	[_SIMPLE] = LAYOUT(
		KC_GRV     , KC_1       , KC_2       , KC_3       , KC_4       , KC_5       , KC_6       , KC_7       , KC_8       , KC_9       , KC_0       , KC_MINS    , KC_EQL     , KC_BSPC    , KC_HOME     ,
		KC_TAB     , KC_Q       , KC_W       , KC_E       , KC_R       , KC_T       , KC_Y       , KC_U       , KC_I       , KC_O       , KC_P       , KC_LBRC    , KC_RBRC    , KC_BSLS    , MO(_CONTROL),
		LCTL_ESC   , KC_A       , KC_S       , KC_D       , KC_F       , KC_G       , KC_H       , KC_J       , KC_K       , KC_L       , KC_SCLN    , KC_QUOT    , KC_ENT                  , KC_PGDN     ,
		KC_LSFT    , KC_Z       , KC_X       , KC_C       , KC_V       , KC_B       , KC_N       , KC_M       , KC_COMM    , KC_DOT     , KC_SLSH    , XXXXXXX    , KC_RSFT    , KC_UP      , KC_END      ,
		MO(_MODS)  , MO(_L1)    , MO(_R1)    , KC_SPC                                                                      , MO(_R1)    , MO(_L1)    , XXXXXXX    , KC_LEFT    , KC_DOWN    , KC_RIGHT   ),

	[_L1] = LAYOUT(
		KC_ESC     , KC_F1      , KC_F2      , KC_F3      , KC_F4      , KC_F5      , KC_F6      , KC_F7      , KC_F8      , KC_F9      , KC_F10     , KC_F11     , KC_F12     , KC_DEL     , _______     ,
		_______    , KC_GRV     , KC_5       , KC_4       , KC_3       , _______    , KC_PGUP    , KC_HOME    , KC_END     , KC_PGDN    , KC_INS     , _______    , _______    , _______    , _______     ,
		_______    , KC_LGUI    , KC_2       , KC_1       , KC_0       , KC_9       , KC_LEFT    , KC_DOWN    , KC_UP      , KC_RIGHT   , KC_DEL     , KC_RGUI    , _______                 , _______     ,
		_______    , _______    , KC_8       , KC_7       , KC_6       , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______     ,
		_______    , _______    , _______    , _______                                                                     , _______    , _______    , _______    , _______    , _______    , _______    ),

    [_R1] = LAYOUT(
		KC_ESC     , KC_F1      , KC_F2      , KC_F3      , KC_F4      , KC_F5      , KC_F6      , KC_F7      , KC_F8      , KC_F9      , KC_F10     , KC_F11     , KC_F12     , _______    , _______     ,
		_______    , _______    , KC_LT      , KC_GRV     , KC_GT      , _______    , KC_AT      , KC_LBRC    , KC_MINUS   , KC_RBRC    , _______    , _______    , _______    , _______    , _______     ,
		_______    , KC_BSLS    , KC_LCBR    , KC_EQL     , KC_RCBR    , KC_HASH    , KC_UNDS    , KC_LPRN    , KC_DQT     , KC_RPRN    , _______    , _______    , _______                 , _______     ,
		_______    , KC_PERC    , KC_EXLM    , KC_PLUS    , KC_TILDE   , KC_CIRC    , KC_AMPR    , KC_ASTR    , KC_DLR     , KC_PIPE    , _______    , _______    , _______    , _______    , _______     ,
		_______    , _______    , _______    , _______                                                                     , _______    , _______    , _______    , _______    , _______    , _______    ),

    [_MODS] = LAYOUT(
		KC_ESC     , KC_F1      , KC_F2      , KC_F3      , KC_F4      , KC_F5      , KC_F6      , KC_F7      , KC_F8      , KC_F9      , KC_F10     , KC_F11     , KC_F12     , _______    , _______     ,
		_______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______     ,
		_______    , KC_LSFT    , KC_LGUI    , KC_LALT    , KC_LCTL    , _______    , _______    , KC_RCTL    , KC_RALT    , KC_RGUI    , KC_RSFT    , _______    , _______                 , _______     ,
		_______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______     ,
		_______    , _______    , _______    , _______                                                                     , _______    , _______    , _______    , _______    , _______    , _______    ),

    [_CONTROL] = LAYOUT(
		KC_T       , DF(_BASE)  , DF(_ENT)   , DF(_SIMPLE), _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______     ,
		_______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______     ,
		_______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______                 , _______     ,
		_______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______     ,
		_______    , _______    , _______    , _______                                                                     , _______    , RESET      , _______    , _______    , _______    , _______    ),
};
