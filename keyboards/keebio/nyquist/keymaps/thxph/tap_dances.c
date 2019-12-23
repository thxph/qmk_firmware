#include "tap_dances.h"

qk_tap_dance_action_t tap_dance_actions[] = {
  [T_CTRL]     = ACTION_TAP_DANCE_FN_ADVANCED(NULL, t_ctrl_finished, t_ctrl_reset)
};

// T_CTRL

static tap t_ctrl_tap_state = {
  .is_press_action = true,
  .state = 0
};

void t_ctrl_finished (qk_tap_dance_state_t *state, void *user_data) {
  t_ctrl_tap_state.state = cur_dance(state);
  switch (t_ctrl_tap_state.state) {
    case SINGLE_TAP: break;
    case SINGLE_HOLD: layer_on(_CONTROL); break;
    case DOUBLE_TAP: break;
    case DOUBLE_HOLD: layer_on(_CONFIG); break;
    case TRIPLE_TAP:
      if (layer_state_is(_CONFIG)) {
        layer_off(_CONFIG);
      } else {
        layer_on(_CONFIG);
      }
      break;
  }
}

void t_ctrl_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (t_ctrl_tap_state.state) {
    case SINGLE_TAP: break;
    case SINGLE_HOLD: layer_off(_CONTROL); break;
    case DOUBLE_TAP: break;
    case DOUBLE_HOLD: layer_off(_CONFIG); break;
  }
  t_ctrl_tap_state.state = 0;
}
