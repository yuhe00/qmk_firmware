#include "zen.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Base layer (Colemak) */
[0] = KEYMAP(
  KC_EQL,        KC_1,    KC_2,    KC_3,    KC_4,     KC_5,                       KC_6,     KC_7,     KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_TAB,        KC_Q,    KC_W,    KC_F,    KC_P,     KC_G,                       KC_J,     KC_L,     KC_U,    KC_Y,    KC_SCLN, KC_BSLS,
  KC_LGUI,       KC_A,    KC_R,    KC_S,    KC_T,     KC_D,                       KC_H,     KC_N,     KC_E,    KC_I,    KC_O,    KC_QUOT,
  OSM(MOD_LSFT), KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,                       KC_K,     KC_M,     KC_COMM, KC_DOT,  KC_SLSH, OSM(MOD_RSFT),
  MO(2),         KC_PSCR, KC_SLCK, KC_LALT, KC_RCTL,  KC_SPC,  KC_ESC,  KC_BSPC,  KC_ENT,   MO(3),    KC_RALT, KC_INS,  KC_DEL,  MO(4)
),
/* Base layer (Qwerty) */
[1] = KEYMAP(
  KC_EQL,        KC_1,    KC_2,    KC_3,    KC_4,     KC_5,                       KC_6,     KC_7,     KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_TAB,        KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,                       KC_Y,     KC_U,     KC_I,    KC_O,    KC_P,    KC_BSLS,
  KC_LGUI,       KC_A,    KC_S,    KC_D,    KC_F,     KC_G,                       KC_H,     KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  OSM(MOD_LSFT), KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,                       KC_N,     KC_M,     KC_COMM, KC_DOT,  KC_SLSH, OSM(MOD_RSFT),
  MO(2),         KC_PSCR, KC_SLCK, KC_LALT, KC_LCTL,  KC_SPC,  KC_ESC,  KC_BSPC,  KC_ENT,   MO(3),    KC_RALT, KC_INS,  KC_DEL,  MO(4)
),
/* NAV layer */
[2] = KEYMAP(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,    KC_F9,   KC_F10,  KC_F11,  KC_F12,
  KC_TRNS, KC_TRNS, KC_BTN1, KC_MS_U, KC_BTN2, RESET,                     KC_TRNS, KC_PGUP,  KC_UP,   KC_PGDN, KC_INS,  KC_HOME,
  KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,                   KC_TRNS, KC_LEFT,  KC_DOWN, KC_RGHT, KC_DEL,  KC_END,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, RGB_MOD, KC_TRNS, KC_BTN1, KC_BTN2, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),
/* Symbol layer */
[3] = KEYMAP(
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_NLCK, KC_CALC,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
  KC_TRNS, KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_AMPR,                   KC_PSLS, KC_P7,    KC_P8,   KC_P9,   KC_PMNS,  KC_UNDS,
  KC_TRNS, KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_GRV,                    KC_PAST, KC_P4,    KC_P5,   KC_P6,   KC_PPLS,  KC_EQL,
  KC_TRNS, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD,                   KC_PEQL, KC_P1,    KC_P2,   KC_P3,   KC_PENT,  KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_P0,   KC_PDOT, KC_TRNS,  KC_TRNS
),
/* Fn layer */
[4] = KEYMAP(
  RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUD, RGB_HUI, RGB_TOG,                   KC_VOLU, KC_MPLY, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, RGB_SAD, RGB_SAI, RGB_MOD,                   KC_VOLD, KC_MPRV, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, RGB_VAD, RGB_VAI, MAGIC_TOGGLE_NKRO,         KC_MUTE, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),
};

#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
float tone_colemak[][2]    = SONG(COLEMAK_SOUND);
#endif

void persistant_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  /* switch (keycode) { */
    /* case QWERTY: */
    /*   if (record->event.pressed) { */
    /*     #ifdef AUDIO_ENABLE */
    /*       PLAY_NOTE_ARRAY(tone_qwerty, false, 0); */
    /*     #endif */
    /*     persistant_default_layer_set(1UL<<_QWERTY); */
    /*   } */
    /*   return false; */
    /*   break; */
    //case COLEMAK:
      //if (record->event.pressed) {
        //#ifdef AUDIO_ENABLE
          //PLAY_NOTE_ARRAY(tone_colemak, false, 0);
        //#endif
        //persistant_default_layer_set(1UL<<_COLEMAK);
      //}
      //return false;
      //break;
  /* } */
  return true;
}
