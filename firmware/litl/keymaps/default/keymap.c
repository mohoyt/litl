/* Copyright 2022 mohoyt
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_all(
      KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, 
      KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT,
      LSFT_T(KC_GRV), KC_SLSH, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_RSFT,
      KC_LCTL, KC_LGUI, KC_LALT, LT(1, KC_SPC), MO(2), LT(1, KC_SPC), KC_RALT, KC_RGUI, KC_RCTL, KC_MPLY, KC_MUTE ),

  [1] = LAYOUT_all(
  	  KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
  	  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_UP, KC_MINS, KC_EQL, KC_QUOT, KC_ENT,
  	  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_EQL, KC_SLSH, KC_TRNS,
  	  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_MUTE ),

  [2] = LAYOUT_all(
      KC_TRNS, RGB_SAI, RGB_SAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO  , KC_UP, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, RGB_TOG, RGB_MOD, RGB_RMOD,KC_TRNS, KC_TRNS, KC_NO  , KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_TRNS,
      KC_TRNS, RGB_VAI, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_UP,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_TRNS )
};

/* The encoder_update_user is a function.
 * It'll be called by QMK every time you turn the encoder.
 *
 * The index parameter tells you which encoder was turned. If you only have
 * one encoder, the index will always be zero.
 * 
 * The clockwise parameter tells you the direction of the encoder. It'll be
 * true when you turned the encoder clockwise, and false otherwise.
 */
bool encoder_update_user(uint8_t index, bool clockwise) {
  /* With an if statement we can check which encoder was turned. */
  if (index == 0) { /* First encoder */
    /* And with another if statement we can check the direction. */
    if (clockwise) {
      tap_code_delay(KC_VOLU, 10);
    } else {
      tap_code_delay(KC_VOLD, 10);
    }
  /* You can copy the code and change the index for every encoder you have. Most
     keyboards will only have two, so this piece of code will suffice. */
  } else if (index == 1) { /* Second encoder */
     if (clockwise) {
         tap_code(KC_MPRV);
     } else {
         tap_code(KC_MNXT);
     }
  }
  return false;
}