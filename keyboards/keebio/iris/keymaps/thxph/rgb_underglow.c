#include "rgb_underglow.h"

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
    case RGBESPI:
      if (record->event.pressed) {
        rgblight_increase_speed_noeeprom();
      }
      return false;
      break;
    case RGBESPD:
      if (record->event.pressed) {
        rgblight_decrease_speed_noeeprom();
      }
      return false;
      break;
    case RGBPSPI:
      if (record->event.pressed) {
        rgblight_increase_speed();
      }
      return false;
      break;
    case RGBPSPD:
      if (record->event.pressed) {
        rgblight_decrease_speed();
      }
      return false;
      break;
  }
  return true;
}
