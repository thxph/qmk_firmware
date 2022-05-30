#include "rgb_underglow.h"

void handle_layer_changes(layer_state_t state) {
  switch (get_highest_layer(state)) {
    case _CONFIG:
        rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING+1);
        rgblight_sethsv_noeeprom(HSV_WHITE);
        break;
    case _CONTROL:
        rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING+1);
        rgblight_sethsv_noeeprom(HSV_CORAL);
        break;
    case _R2:
        rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING+1);
        rgblight_sethsv_noeeprom(HSV_TEAL);
        break;
    case _L2:
        rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING+1);
        rgblight_sethsv_noeeprom(HSV_ORANGE);
        break;
    case _R1:
        rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING+1);
        rgblight_sethsv_noeeprom(HSV_SPRINGGREEN);
        break;
    case _L1:
        rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING+1);
        rgblight_sethsv_noeeprom(HSV_GOLDENROD);
        break;
    case _B1:
        rgblight_sethsv_noeeprom(HSV_RED);
        rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_SWIRL+4);
        break;
    case _BASE:
        rgblight_sethsv_noeeprom(HSV_RED);
        rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_SWIRL+4);
        break;

  }
}

bool process_rgb_keycodes(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGBETOG:
      if (record->event.pressed) {
        rgblight_toggle_noeeprom();
      }
      return false;
      break;
    case RGBEMOD:
      if (record->event.pressed) {
        rgblight_step_noeeprom();
      }
      return false;
      break;
  }
  return true;
}
