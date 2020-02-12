#pragma once

#include "thxph.h"
#include "keymap.h"

void t_ctrl_finished (qk_tap_dance_state_t *state, void *user_data);
void t_ctrl_reset (qk_tap_dance_state_t *state, void *user_data);

enum {
  T_CTRL = 0
};
