#pragma once

#include "thxph.h"
#include "keymap.h"

void handle_layer_changes (layer_state_t state);
bool process_rgb_keycodes (uint16_t keycode, keyrecord_t *record);
