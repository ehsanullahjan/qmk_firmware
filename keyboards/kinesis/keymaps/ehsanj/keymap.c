#include QMK_KEYBOARD_H

#define _______     KC_TRNS
#define XXXXXXX     KC_NO

#define COLEMAK     0
#define QWERTY      1
#define FLAYOUT     2
#define FKEYS       3
#define NKEYS       4
#define MOUSE       5
#define NUMPAD      6
#define FN          7
#define PROGRAM     8

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [COLEMAK] = LAYOUT(
        KC_ESC,        KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,     KC_F7,    KC_F8,        KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_PSCR,   KC_SCRL,   KC_PAUS,  TG(NUMPAD),  MO(PROGRAM),
        // left hand                                                                                             // right hand
        TG(FLAYOUT),      KC_1,             KC_2,               KC_3,             KC_4,             KC_5,        KC_6,            KC_7,               KC_8,             KC_9,     KC_0,     TG(MOUSE),
        KC_EQL,           KC_Q,             KC_W,               KC_F,             KC_P,             KC_G,        KC_J,            KC_L,               KC_U,             KC_Y,     KC_SCLN,  KC_MINS,
        KC_GRV,           KC_A,             KC_R,               KC_S,             KC_T,             KC_D,        KC_H,            KC_N,               KC_E,             KC_I,     KC_O,     KC_QUOT,
        LSFT_T(KC_LBRC),  KC_Z,             KC_X,               KC_C,             KC_V,             KC_B,        KC_K,            KC_M,               KC_COMM,          KC_DOT,   KC_SLSH,  RSFT_T(KC_RBRC),
                          KC_CAPS,          LCTL_T(KC_BSLS),    LALT_T(KC_LEFT),  LGUI_T(KC_RGHT),               RGUI_T(KC_UP),   RALT_T(KC_DOWN),    RCTL_T(KC_LBRC),  KC_RBRC,
                                                                                     /* thumb clusters */
                                            LGUI_T(KC_DEL),     LALT_T(KC_F11),                                  RALT_T(KC_F12),  RGUI_T(KC_ESC),
                                                                LCTL_T(KC_HOME),                                 RCTL_T(KC_PGUP),
                          LSFT_T(KC_BSPC),  LT(FKEYS,KC_TAB),   LT(FN,KC_END),                                   LT(FN,KC_PGDN),  LT(FKEYS,KC_ENT),   RSFT_T(KC_SPC)
    ),

    [QWERTY] = LAYOUT(
        _______,       _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,     _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        // left hand                                                                                             // right hand
        _______,          _______,          _______,            _______,          _______,          _______,     _______,         _______,            _______,          _______,  _______,  _______,
        _______,          _______,          _______,            KC_E,             KC_R,             KC_T,        KC_Y,            KC_U,               KC_I,             KC_O,     KC_P,     _______,
        _______,          _______,          KC_S,               KC_D,             KC_F,             KC_G,        _______,         KC_J,               KC_K,             KC_L,     KC_SCLN,  _______,
        _______,          _______,          _______,            _______,          _______,          _______,     KC_N,            _______,            _______,          _______,  _______,  _______,
                          _______,          _______,            _______,          _______,                       _______,         _______,            _______,          _______,
                                                                                     /* thumb clusters */
                                            _______,            _______,                                         _______,         _______,
                                                                _______,                                         _______,
                          _______,          _______,            _______,                                         _______,         _______,            _______
    ),

    [FLAYOUT] = LAYOUT(
        _______,       _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,     _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        // left hand                                                                                             // right hand
        _______,          KC_F1,            KC_F2,              KC_F3,            KC_F4,            KC_F5,       KC_F6,           KC_F7,              KC_F8,            KC_F9,    KC_F10,   _______,
        _______,          _______,          _______,            _______,          _______,          _______,     _______,         _______,            _______,          _______,  _______,  _______,
        _______,          _______,          _______,            _______,          _______,          _______,     _______,         _______,            _______,          _______,  _______,  _______,
        _______,          _______,          _______,            _______,          _______,          _______,     _______,         _______,            _______,          _______,  _______,  _______,
                          _______,          _______,            _______,          _______,                       _______,         _______,            _______,          _______,
                                                                                     /* thumb clusters */
                                            _______,            _______,                                         _______,         _______,
                                                                _______,                                         _______,
                          _______,          LT(NKEYS,KC_TAB),   _______,                                         _______,         LT(NKEYS,KC_ENT),   _______
    ),

    [FKEYS] = LAYOUT(
        _______,       _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,     _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        // left hand                                                                                             // right hand
        _______,          KC_F1,            KC_F2,              KC_F3,            KC_F4,            KC_F5,       KC_F6,           KC_F7,              KC_F8,            KC_F9,    KC_F10,   _______,
        _______,          _______,          _______,            _______,          _______,          _______,     _______,         _______,            KC_UP,            _______,  _______,  _______,
        _______,          _______,          _______,            _______,          _______,          _______,     _______,         KC_LEFT,            KC_DOWN,          KC_RGHT,  _______,  _______,
        _______,          _______,          _______,            _______,          _______,          _______,     _______,         _______,            _______,          _______,  _______,  _______,
                          _______,          _______,            _______,          _______,                       _______,         _______,            _______,          _______,
                                                                                     /* thumb clusters */
                                            _______,            _______,                                         _______,         _______,
                                                                _______,                                         _______,
                          _______,          _______,            _______,                                         _______,         _______,            _______
    ),

    [NKEYS] = LAYOUT(
        _______,       _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,     _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        // left hand                                                                                             // right hand
        _______,          KC_1,             KC_2,               KC_3,             KC_4,             KC_5,        KC_6,            KC_7,               KC_8,             KC_9,     KC_0,     _______,
        _______,          _______,          _______,            _______,          _______,          _______,     _______,         _______,            KC_UP,            _______,  _______,  _______,
        _______,          _______,          _______,            _______,          _______,          _______,     _______,         KC_LEFT,            KC_DOWN,          KC_RGHT,  _______,  _______,
        _______,          _______,          _______,            _______,          _______,          _______,     _______,         _______,            _______,          _______,  _______,  _______,
                          _______,          _______,            _______,          _______,                       _______,         _______,            _______,          _______,
                                                                                     /* thumb clusters */
                                            _______,            _______,                                         _______,         _______,
                                                                _______,                                         _______,
                          _______,          _______,            _______,                                         _______,         _______,            _______
    ),

    [MOUSE] = LAYOUT(
        _______,       _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,     _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        // left hand                                                                                             // right hand
        TO(FLAYOUT),      _______,          _______,            _______,          _______,          _______,     _______,         _______,            _______,          _______,  _______,  _______,
        _______,          _______,          _______,            KC_WH_U,          _______,          _______,     _______,         _______,            KC_MS_U,          _______,  _______,  _______,
        _______,          _______,          KC_WH_L,            KC_WH_D,          KC_WH_R,          _______,     _______,         KC_MS_L,            KC_MS_D,          KC_MS_R,  _______,  _______,
        KC_LSFT,          _______,          _______,            _______,          _______,          _______,     _______,         _______,            _______,          _______,  _______,  KC_RSFT,
                          _______,          _______,            _______,          _______,                       _______,         _______,            _______,          _______,
                                                                                     /* thumb clusters */
                                            _______,            _______,                                         _______,         _______,
                                                                _______,                                         _______,
                          KC_ACL1,          KC_ACL0,            _______,                                         _______,         KC_BTN2,            KC_BTN1
    ),

    [NUMPAD] = LAYOUT(
        _______,       _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,     _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        // left hand                                                                                             // right hand
        TO(FLAYOUT),      KC_F1,            KC_F2,              KC_F3,            KC_F4,            KC_F5,       KC_F6,           KC_F7,              KC_F8,            KC_F9,    KC_F10,   TO(MOUSE),
        _______,          _______,          _______,            KC_UP,            _______,          _______,     _______,         KC_P7,              KC_P8,            KC_P9,    KC_PMNS,  _______,
        _______,          _______,          KC_LEFT,            KC_DOWN,          KC_RGHT,          _______,     KC_BSPC,         KC_P4,              KC_P5,            KC_P6,    KC_PPLS,  _______,
        _______,          _______,          _______,            _______,          _______,          _______,     _______,         KC_P1,              KC_P2,            KC_P3,    KC_PSLS,  _______,
                          _______,          _______,            _______,          _______,                       KC_PEQL,         KC_P0,              KC_PDOT,          KC_PAST,
                                                                                     /* thumb clusters */
                                            _______,            _______,                                         _______,         _______,
                                                                _______,                                         _______,
                          LSFT_T(KC_BSPC),  LT(NUMPAD,KC_TAB),  _______,                                         _______,         LT(NUMPAD,KC_ENT),  RSFT_T(KC_SPC)
    ),

    [FN] = LAYOUT(
        _______,       _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,     _______,   _______,   _______,   _______,   KC_MUTE,   KC_VOLD,   KC_VOLU,   _______,   _______,
        // left hand                                                                                             // right hand
        _______,          _______,          _______,            _______,          _______,          _______,     _______,         _______,            _______,          _______,  _______,  _______,
        _______,          _______,          _______,            _______,          _______,          _______,     _______,         _______,            _______,          _______,  _______,  _______,
        _______,          _______,          _______,            _______,          _______,          _______,     _______,         _______,            _______,          _______,  _______,  _______,
        KC_LSFT,          _______,          _______,            _______,          _______,          _______,     _______,         _______,            _______,          _______,  _______,  KC_RSFT,
                          _______,          KC_BSLS,            KC_LEFT,          KC_RGHT,                       KC_UP,           KC_DOWN,            KC_LBRC,          _______,
                                                                                     /* thumb clusters */
                                            KC_DEL,             KC_LALT,                                         KC_RALT,         KC_RGUI,
                                                                KC_LCTL,                                         KC_RCTL,
                          KC_BSPC,          KC_TAB,             _______,                                         _______,         KC_ENT,             KC_SPC
    ),

    [PROGRAM] = LAYOUT(
        TO(COLEMAK),  XXXXXXX,   XXXXXXX,   TO(QWERTY),   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,  EE_CLR,     QK_BOOT,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,
        // left hand                                                                                             // right hand
        XXXXXXX,          XXXXXXX,          XXXXXXX,            XXXXXXX,          XXXXXXX,          XXXXXXX,     XXXXXXX,         XXXXXXX,            XXXXXXX,          XXXXXXX,   XXXXXXX,  XXXXXXX,
        XXXXXXX,          XXXXXXX,          XXXXXXX,            XXXXXXX,          XXXXXXX,          XXXXXXX,     XXXXXXX,         XXXXXXX,            XXXXXXX,          XXXXXXX,   XXXXXXX,  XXXXXXX,
        XXXXXXX,          XXXXXXX,          XXXXXXX,            XXXXXXX,          XXXXXXX,          XXXXXXX,     XXXXXXX,         XXXXXXX,            XXXXXXX,          XXXXXXX,   XXXXXXX,  XXXXXXX,
        XXXXXXX,          XXXXXXX,          XXXXXXX,            XXXXXXX,          XXXXXXX,          XXXXXXX,     XXXXXXX,         XXXXXXX,            XXXXXXX,          XXXXXXX,   XXXXXXX,  XXXXXXX,
                          XXXXXXX,          XXXXXXX,            XXXXXXX,          XXXXXXX,                       XXXXXXX,         XXXXXXX,            XXXXXXX,          XXXXXXX,
                                                                                     /* thumb clusters */
                                            XXXXXXX,            XXXXXXX,                                         XXXXXXX,         XXXXXXX,
                                                                XXXXXXX,                                         XXXXXXX,
                          XXXXXXX,          XXXXXXX,            XXXXXXX,                                         XXXXXXX,         XXXXXXX,            XXXXXXX
    )
};
