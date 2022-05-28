#include "rgb_underglow.h"

void handle_layer_changes(layer_state_t state) {
  switch (get_highest_layer(state)) {
    case _CONTROL:
      rgb_matrix_set_speed_noeeprom(100);
      rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
      rgb_matrix_sethsv_noeeprom(HSV_WHITE);
      break;
    case _RAISE:
      rgb_matrix_set_speed_noeeprom(100);
      rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
      rgb_matrix_sethsv_noeeprom(HSV_GREEN);
      break;
    case _LOWER:
      rgb_matrix_set_speed_noeeprom(100);
      rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
      rgb_matrix_sethsv_noeeprom(HSV_RED);
      break;
    case _LAY1:
      rgb_matrix_set_speed_noeeprom(100);
      rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
      rgb_matrix_sethsv_noeeprom(HSV_AZURE);
      break;
    case _FUNCTION:
      rgb_matrix_set_speed_noeeprom(100);
      rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
      rgb_matrix_sethsv_noeeprom(HSV_GOLDENROD);
      break;
    case _CONFIG:
      rgb_matrix_set_speed_noeeprom(200);
      rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
      rgb_matrix_sethsv_noeeprom(HSV_WHITE);
      break;
    case _BASE:
      rgb_matrix_set_speed_noeeprom(68);
      rgb_matrix_sethsv_noeeprom(HSV_BLUE);
      rgb_matrix_mode_noeeprom(RGB_MATRIX_DUAL_BEACON);
      break;
  }
}

bool process_rgb_keycodes(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGBETOG:
      if (record->event.pressed) {
        rgb_matrix_toggle_noeeprom();
      }
      return false;
      break;
    case RGBEMOD:
      if (record->event.pressed) {
        rgb_matrix_step_noeeprom();
      }
      return false;
      break;
  }
  return true;
}
