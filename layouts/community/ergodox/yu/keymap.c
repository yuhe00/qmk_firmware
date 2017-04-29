#include QMK_KEYBOARD_H

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Basic layer */
[0] = LAYOUT_ergodox(
        // left hand
        KC_EQL,         KC_1,       KC_2,       KC_3,       KC_4,          KC_5,        KC_PAUSE,
        KC_TAB,         KC_Q,       KC_W,       KC_F,       KC_P,          KC_G,        MO(3),
        KC_LGUI,        KC_A,       KC_R,       KC_S,       KC_T,          KC_D,
        OSM(MOD_LSFT),  KC_Z,       KC_X,       KC_C,       KC_V,          KC_B,        KC_LCTL,
        MO(2),          KC_PSCR,    KC_SLCK,    KC_LALT,    KC_LCTL,
                        KC_LCTL,    KC_LALT,
                                    KC_HOME,
        KC_SPC,         KC_ESC,     KC_END,

        // right hand
        TG(1),      KC_6,       KC_7,           KC_8,     KC_9,        KC_0,        KC_MINS,
        MO(2),      KC_J,       KC_L,           KC_U,     KC_Y,        KC_SCLN,     KC_BSLS,
                    KC_H,       KC_N,           KC_E,     KC_I,        KC_O,        KC_QUOT,
        KC_DEL,     KC_K,       KC_M,           KC_COMM,  KC_DOT,      KC_SLSH,     OSM(MOD_RSFT),
                                MO(3),          KC_RALT,  KC_INS,      KC_DEL,      MO(4),
        KC_RALT,    KC_RCTL,
        KC_PGUP,
        KC_PGDN,    KC_BSPC,    KC_ENT
    ),

/* QWERTY layer */
[1] = LAYOUT_ergodox(
       // left hand
       KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_TRNS,
       KC_TRNS,        KC_A,       KC_S,       KC_D,       KC_F,       KC_G,
       KC_TRNS,        KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_TRNS,
       KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                       KC_TRNS,    KC_TRNS,
                                   KC_TRNS,
       KC_TRNS,        KC_TRNS,    KC_TRNS,

       // right hand
       KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_TRNS,
                       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_TRNS,
       KC_TRNS,        KC_N,       KC_M,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                                   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_TRNS,
       KC_TRNS,
       KC_TRNS,        KC_TRNS,    KC_TRNS
    ),

/* NAV layer */
[2] = LAYOUT_ergodox(
       // left hand
       KC_GRV,         KC_F1,          KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,
       KC_TRNS,        KC_TRNS,        KC_BTN1,    KC_MS_U,    KC_BTN2,    KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_TRNS,        KC_MS_L,    KC_MS_D,    KC_MS_R,    KC_TRNS,
       KC_TRNS,        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,
                       KC_TRNS,        KC_TRNS,
                                       KC_TRNS,
       KC_BTN1,        KC_BTN2,        KC_TRNS,

       // right hand
       KC_F7,          KC_F8,          KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_TRNS,
       KC_TRNS,        KC_TRNS,        KC_PGUP,    KC_UP,      KC_PGDN,    KC_INS,     KC_HOME,
                       KC_TRNS,        KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_DEL,     KC_END,
       KC_TRNS,        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                                       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,

       KC_TRNS,        KC_TRNS,
       KC_TRNS,
       KC_TRNS,        KC_TRNS,        KC_TRNS
),

/* Symbol Layer */
[3] = LAYOUT_ergodox(
       // left hand
       KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,    KC_TRNS,  KC_TRNS,
       KC_TRNS,        KC_EXLM,    KC_AT,      KC_LCBR,     KC_RCBR,    KC_AMPR,  KC_TRNS,
       KC_TRNS,        KC_HASH,    KC_DLR,     KC_LPRN,     KC_RPRN,    KC_GRV,
       KC_TRNS,        KC_PERC,    KC_CIRC,    KC_LBRC,     KC_RBRC,    KC_TILD,  KC_TRNS,
       KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,
                       KC_TRNS,    KC_TRNS,
                                   KC_TRNS,
       KC_TRNS,        KC_TRNS,    KC_TRNS,

       // right hand
       KC_NLCK,        KC_CALC,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_PSLS,    KC_P7,      KC_P8,      KC_P9,      KC_PMNS,    KC_UNDS,
                       KC_PAST,    KC_P4,      KC_P5,      KC_P6,      KC_PPLS,    KC_EQL,
       KC_TRNS,        KC_PEQL,    KC_P1,      KC_P2,      KC_P3,      KC_PENT,    KC_TRNS,
                                   KC_TRNS,    KC_P0,      KC_PDOT,    KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_TRNS,
       KC_TRNS,
       KC_TRNS,        KC_TRNS,    KC_TRNS
),

/* Fn Layer */
[4] = LAYOUT_ergodox(
       // left hand
       RESET,          KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                       RGB_MOD,    KC_TRNS,
                                   KC_TRNS,
       RGB_VAD,        RGB_VAI,    KC_TRNS,

       // right hand
       KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_VOLU,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                       KC_VOLD,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_MUTE,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                                   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
       RGB_TOG,        RGB_SLD,
       KC_TRNS,
       KC_TRNS,        RGB_HUD,    RGB_HUI
),

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
#ifdef BACKLIGHT_ENABLE
  static uint8_t state;

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  //reduce LED on time to 1/6th because LEDs are too strong
  if (++state < 6) return;
  state = 0;

  //bit 1: default layer 1 - QWERTY
  if (default_layer_state & (1UL << 1)) ergodox_right_led_1_on();

  uint8_t layer = biton32(layer_state);

  //layer 2 : Symbols (& Fs)
  //if (layer == 2) ergodox_right_led_2_on();

  //layer 3 : F-lock
  if (layer == 3) ergodox_right_led_2_on();

  //layer 4 : Num-lock
  if (layer == 4) ergodox_right_led_3_on();
#endif
};
