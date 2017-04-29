/* Copyright 2015-2017 Jack Humbert
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
#include "muse.h"

enum preonic_layers {
  _BASIC,
  _QWERTY,
  _NAV,
  _SYMBOL,
  _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASIC] = LAYOUT_preonic_grid( \
  KC_EQL,         KC_1,       KC_2,       KC_3,       KC_4,          KC_5,          \
  KC_6,           KC_7,       KC_8,       KC_9,       KC_0,          KC_MINS,       \
  KC_TAB,         KC_Q,       KC_W,       KC_F,       KC_P,          KC_G,          \
  KC_J,           KC_L,       KC_U,       KC_Y,       KC_SCLN,       KC_BSLS,       \
  KC_LGUI,        KC_A,       KC_R,       KC_S,       KC_T,          KC_D,          \
  KC_H,           KC_N,       KC_E,       KC_I,       KC_O,          KC_QUOT,       \
  OSM(MOD_LSFT),  KC_Z,       KC_X,       KC_C,       KC_V,          KC_B,          \
  KC_K,           KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,       OSM(MOD_RSFT), \
  MO(2),          KC_PSCR,    KC_LALT,    KC_LCTL,    KC_SPC,        KC_ESC,        \
  KC_BSPC,        KC_ENT,     MO(3),      KC_RALT,    KC_DEL,        MO(4)          \
),

[_QWERTY] = LAYOUT_preonic_grid( \
  KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,       \
  KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,       \
  KC_TRNS,        KC_Q,       KC_W,       KC_E,       KC_R,          KC_T,          \
  KC_Y,           KC_U,       KC_I,       KC_O,       KC_P,          KC_TRNS,       \
  KC_TRNS,        KC_A,       KC_S,       KC_D,       KC_F,          KC_G,          \
  KC_H,           KC_J,       KC_K,       KC_L,       KC_SCLN,       KC_TRNS,       \
  KC_TRNS,        KC_Z,       KC_X,       KC_C,       KC_V,          KC_B,          \
  KC_K,           KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,       KC_TRNS,       \
  KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,       \
  KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS        \
),

[_NAV] = LAYOUT_preonic_grid( \
  KC_F1,          KC_F2,      KC_F3,      KC_F4,      KC_F5,         KC_F6,         \
  KC_F7,          KC_F8,      KC_F9,      KC_F10,     KC_F11,        KC_F12,        \
  KC_TRNS,        KC_TRNS,    KC_BTN1,    KC_MS_U,    KC_BTN2,       KC_TRNS,       \
  KC_TRNS,        KC_PGUP,    KC_UP,      KC_PGDN,    KC_INS,        KC_HOME,       \
  KC_TRNS,        KC_TRNS,    KC_MS_L,    KC_MS_D,    KC_MS_R,       KC_TRNS,       \
  KC_TRNS,        KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_DEL,        KC_END,        \
  KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,       \
  KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,       \
  KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_BTN1,       KC_BTN2,       \
  KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS        \
),

[_SYMBOL] = LAYOUT_preonic_grid( \
  KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,       \
  KC_NLCK,        KC_CALC,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,       \
  KC_TRNS,        KC_EXLM,    KC_AT,      KC_LCBR,    KC_RCBR,       KC_AMPR,       \
  KC_PSLS,        KC_P7,      KC_P8,      KC_P9,      KC_PMNS,       KC_UNDS,
  KC_TRNS,        KC_HASH,    KC_DLR,     KC_LPRN,    KC_RPRN,       KC_GRV,       \
  KC_PAST,        KC_P4,      KC_P5,      KC_P6,      KC_PPLS,       KC_EQL,
  KC_TRNS,        KC_PERC,    KC_CIRC,    KC_LBRC,    KC_RBRC,       KC_TILD,       \
  KC_PEQL,        KC_P1,      KC_P2,      KC_P3,      KC_PENT,       KC_TRNS,       \
  KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,       \
  KC_TRNS,        KC_TRNS,    KC_P0,      KC_PDOT,    KC_TRNS,       KC_TRNS        \
),

[_FN] = LAYOUT_preonic_grid( \
  RESET,          KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,       \
  KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,       \
  KC_VOLU,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,       \
  KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,       \
  KC_VOLD,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,       \
  KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,       \
  KC_MUTE,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,       \
  KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,       \
  KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,       \
  KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS        \
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Reset|      |      |      |      |      |      |      |      |      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Aud on|AudOff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|MusOff|MidiOn|MidOff|      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */


};

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update(bool clockwise) {
  if (muse_mode) {
    if (IS_LAYER_ON(_FN)) {
      if (clockwise) {
        muse_offset++;
      } else {
        muse_offset--;
      }
    } else {
      if (clockwise) {
        muse_tempo+=1;
      } else {
        muse_tempo-=1;
      }
    }
  } else {
    if (clockwise) {
      register_code(KC_PGDN);
      unregister_code(KC_PGDN);
    } else {
      register_code(KC_PGUP);
      unregister_code(KC_PGUP);
    }
  }
}

void dip_update(uint8_t index, bool active) {
  switch (index) {
    case 0:
      if (active) {
        layer_on(_FN);
      } else {
        layer_off(_FN);
      }
      break;
    case 1:
      if (active) {
        muse_mode = true;
      } else {
        muse_mode = false;
        #ifdef AUDIO_ENABLE
          stop_all_notes();
        #endif
      }
   }
}

void matrix_scan_user(void) {
  #ifdef AUDIO_ENABLE
    if (muse_mode) {
      if (muse_counter == 0) {
        uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
        if (muse_note != last_muse_note) {
          stop_note(compute_freq_for_midi_note(last_muse_note));
          play_note(compute_freq_for_midi_note(muse_note), 0xF);
          last_muse_note = muse_note;
        }
      }
      muse_counter = (muse_counter + 1) % muse_tempo;
    }
  #endif
}
