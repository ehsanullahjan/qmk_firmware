#include QMK_KEYBOARD_H

#define _______     KC_TRNS
#define XXXXXXX     KC_NO

#define COLEMAK     0
#define QWERTY      1
#define FLAYOUT     2
#define FKEYS      3
#define NKEYS       4
#define MOUSE       5
#define NUMPAD      6
#define FN          7
#define PROGRAM     8

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [COLEMAK] = LAYOUT(
        // left hand
        KC_ESC,             KC_F1,                  KC_F2,                  KC_F3,              KC_F4,                  KC_F5,          KC_F6,      KC_F7,      KC_F8,
        TG(FLAYOUT),        KC_1,                   KC_2,                   KC_3,               KC_4,                   KC_5,
        KC_EQL,             KC_Q,                   KC_W,                   KC_F,               KC_P,                   KC_G,
        KC_GRV,             KC_A,                   KC_R,                   KC_S,               KC_T,                   KC_D,
        KC_LSFT,            KC_Z,                   KC_X,                   KC_C,               KC_V,                   KC_B,
                            KC_CAPS,                LCTL_T(KC_BSLS),        LALT_T(KC_LEFT),    LGUI_T(KC_RGHT),
        // left thumb
                                                    LGUI_T(KC_DEL),         LALT_T(KC_F11),
                                                                            LCTL_T(KC_HOME),
                            LSFT_T(KC_BSPC),        LT(FKEYS,KC_TAB),       LT(FN,KC_END),

        // right hand
        KC_F9,              KC_F10,                 KC_F11,                 KC_F12,             KC_PSCR,                KC_SLCK,        KC_PAUS,    TG(NUMPAD), MO(PROGRAM),
        KC_6,               KC_7,                   KC_8,                   KC_9,               KC_0,                   TG(MOUSE),
        KC_J,               KC_L,                   KC_U,                   KC_Y,               KC_SCLN,                KC_MINS,
        KC_H,               KC_N,                   KC_E,                   KC_I,               KC_O,                   KC_QUOT,
        KC_K,               KC_M,                   KC_COMM,                KC_DOT,             KC_SLSH,                KC_RSFT,
                            RGUI_T(KC_UP),          RALT_T(KC_DOWN),        RCTL_T(KC_LBRC),    KC_RBRC,
        // right thumb
                                                    RALT_T(KC_F12),         RGUI_T(KC_ESC),
                                                    RCTL_T(KC_PGUP),
                                                    LT(FN,KC_PGDN),         LT(FKEYS,KC_ENT),   RSFT_T(KC_SPC)
    ),

    [QWERTY] = LAYOUT(
        // left hand
        _______,            _______,                _______,                _______,            _______,                _______,        _______,    _______,    _______,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                KC_E,               KC_R,                   KC_T,
        _______,            _______,                KC_S,                   KC_D,               KC_F,                   KC_G,
        _______,            _______,                _______,                _______,            _______,                _______,
                            _______,                _______,                _______,            _______,
        // left thumb
                                                    _______,                _______,
                                                                            _______,
                            _______,                _______,                _______,

        // right hand
        _______,            _______,                _______,                _______,            _______,                _______,        _______,    _______,    _______,
        _______,            _______,                _______,                _______,            _______,                _______,
        KC_Y,               KC_U,                   KC_I,                   KC_O,               KC_P,                   _______,
        _______,            KC_J,                   KC_K,                   KC_L,               KC_SCLN,                _______,
        KC_N,               _______,                _______,                _______,            _______,                _______,
                            _______,                _______,                _______,            _______,
        // right thumb
                                                    _______,                _______,
                                                    _______,
                                                    _______,                _______,            _______
    ),

    [FLAYOUT] = LAYOUT(
        // left hand
        _______,            _______,                _______,                _______,            _______,                _______,        _______,    _______,    _______,
        _______,            KC_F1,                  KC_F2,                  KC_F3,              KC_F4,                  KC_F5,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
                            _______,                _______,                _______,            _______,
        // left thumb
                                                    _______,                _______,
                                                                            _______,
                            _______,                LT(NKEYS,KC_TAB),       _______,

        // right hand
        _______,            _______,                _______,                _______,            _______,                _______,        _______,    _______,    _______,
        KC_F6,              KC_F7,                  KC_F8,                  KC_F9,              KC_F10,                 _______,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
                            _______,                _______,                _______,            _______,
        // right thumb
                                                    _______,                _______,
                                                    _______,
                                                    _______,                LT(NKEYS,KC_ENT),   _______
    ),

    [FKEYS] = LAYOUT(
        // left hand
        _______,            _______,                _______,                _______,            _______,                _______,        _______,    _______,    _______,
        _______,            KC_F1,                  KC_F2,                  KC_F3,              KC_F4,                  KC_F5,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
                            _______,                _______,                _______,            _______,
        // left thumb
                                                    _______,                _______,
                                                                            _______,
                            _______,                _______,                _______,

        // right hand
        _______,            _______,                _______,                _______,            _______,                _______,        _______,    _______,    _______,
        KC_F6,              KC_F7,                  KC_F8,                  KC_F9,              KC_F10,                 _______,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
                            _______,                _______,                _______,            _______,
        // right thumb
                                                    _______,                _______,
                                                    _______,
                                                    _______,                _______,            _______
    ),

    [NKEYS] = LAYOUT(
        // left hand
        _______,            _______,                _______,                _______,            _______,                _______,        _______,    _______,    _______,
        _______,            KC_1,                   KC_2,                   KC_3,               KC_4,                   KC_5,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
                            _______,                _______,                _______,            _______,
        // left thumb
                                                    _______,                _______,
                                                                            _______,
                            _______,                _______,                _______,

        // right hand
        _______,            _______,                _______,                _______,            _______,                _______,        _______,    _______,    _______,
        KC_6,               KC_7,                   KC_8,                   KC_9,               KC_0,                   _______,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
                            _______,                _______,                _______,            _______,
        // right thumb
                                                    _______,                _______,
                                                    _______,
                                                    _______,                _______,            _______
    ),

    [MOUSE] = LAYOUT(
        // left hand
        _______,            _______,                _______,                _______,            _______,                _______,        _______,     _______,    _______,
        TO(FLAYOUT),        _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                KC_WH_U,            _______,                _______,
        _______,            _______,                KC_WH_L,                KC_WH_D,            KC_WH_R,                _______,
        KC_LSFT,            _______,                _______,                _______,            _______,                _______,
                            _______,                _______,                _______,            _______,
        // left thumb
                                                    _______,                _______,
                                                                            _______,
                            KC_ACL1,                KC_ACL0,                _______,

        // right hand
        _______,            _______,                _______,                _______,            _______,                _______,        _______,    _______,    _______,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                KC_MS_U,                _______,            _______,                _______,
        _______,            KC_MS_L,                KC_MS_D,                KC_MS_R,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                KC_RSFT,
                            _______,                _______,                _______,            _______,
        // right thumb
                                                    _______,                _______,
                                                    _______,
                                                    _______,                KC_BTN2,            KC_BTN1
    ),

    [NUMPAD] = LAYOUT(
        // left hand
        _______,            _______,                _______,                _______,            _______,                _______,        _______,    _______,    _______,
        TO(FLAYOUT),        KC_F1,                  KC_F2,                  KC_F3,              KC_F4,                  KC_F5,
        _______,            _______,                LSFT(LGUI(KC_LBRC)),    KC_UP,              LSFT(LGUI(KC_RBRC)),    _______,
        _______,            _______,                KC_LEFT,                KC_DOWN,            KC_RGHT,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
                            _______,                _______,                _______,            _______,
        // left thumb
                                                    _______,                _______,
                                                                            _______,
                            LSFT_T(KC_BSPC),        LT(NUMPAD,KC_TAB),      _______,

        // right hand
        _______,            _______,                _______,                _______,            _______,                _______,        _______,    _______,    _______,
        KC_F6,              KC_F7,                  KC_F8,                  KC_F9,              KC_F10,                 TO(MOUSE),
        KC_NLCK,            KC_P7,                  KC_P8,                  KC_P9,              KC_PMNS,                _______,
        KC_BSPC,            KC_P4,                  KC_P5,                  KC_P6,              KC_PPLS,                _______,
        _______,            KC_P1,                  KC_P2,                  KC_P3,              KC_PSLS,                _______,
                            KC_PEQL,                KC_P0,                  KC_PDOT,            KC_PAST,
        // right thumb
                                                    _______,                _______,
                                                    _______,
                                                    _______,                LT(NUMPAD,KC_ENT),  RSFT_T(KC_SPC)
    ),

    [FN] = LAYOUT(
        // left hand
        _______,            _______,                _______,                _______,            _______,                _______,        _______,    _______,    _______,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
        KC_GRV,             _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
                            _______,                KC_BSLS,                KC_LEFT,            KC_RGHT,
        // left thumb
                                                    KC_RGUI,                KC_LALT,
                                                                            KC_LCTL,
                            KC_BSPC,                KC_TAB,                 _______,

        // right hand
        _______,            _______,                _______,                _______,            KC_MUTE,                KC_VOLD,        KC_VOLU,    _______,    _______,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
        _______,            _______,                _______,                _______,            _______,                _______,
                            KC_UP,                  KC_DOWN,                KC_LBRC,            _______,
        // right thumb
                                                    KC_RALT,                KC_LGUI,
                                                    KC_RCTL,
                                                    _______,                KC_ENT,             KC_SPC
    ),

    [PROGRAM] = LAYOUT(
        // left hand
        TO(COLEMAK),        XXXXXXX,                XXXXXXX,                TO(QWERTY),         XXXXXXX,                XXXXXXX,        XXXXXXX,    XXXXXXX,    EEP_RST,
        XXXXXXX,            XXXXXXX,                XXXXXXX,                XXXXXXX,            XXXXXXX,                XXXXXXX,
        XXXXXXX,            XXXXXXX,                XXXXXXX,                XXXXXXX,            XXXXXXX,                XXXXXXX,
        XXXXXXX,            XXXXXXX,                XXXXXXX,                XXXXXXX,            XXXXXXX,                XXXXXXX,
        XXXXXXX,            XXXXXXX,                XXXXXXX,                XXXXXXX,            XXXXXXX,                XXXXXXX,
                            XXXXXXX,                XXXXXXX,                XXXXXXX,            XXXXXXX,
        // left thumb
                                                    XXXXXXX,                XXXXXXX,
                                                                            XXXXXXX,
                            XXXXXXX,                XXXXXXX,                XXXXXXX,

        // right hand
        RESET,              XXXXXXX,                XXXXXXX,                XXXXXXX,            XXXXXXX,                XXXXXXX,        XXXXXXX,    XXXXXXX,    XXXXXXX,
        XXXXXXX,            XXXXXXX,                XXXXXXX,                XXXXXXX,            XXXXXXX,                XXXXXXX,
        XXXXXXX,            XXXXXXX,                XXXXXXX,                XXXXXXX,            XXXXXXX,                XXXXXXX,
        XXXXXXX,            XXXXXXX,                XXXXXXX,                XXXXXXX,            XXXXXXX,                XXXXXXX,
        XXXXXXX,            XXXXXXX,                XXXXXXX,                XXXXXXX,            XXXXXXX,                XXXXXXX,
                            XXXXXXX,                XXXXXXX,                XXXXXXX,            XXXXXXX,
        // right thumb
                                                    XXXXXXX,                XXXXXXX,
                                                    XXXXXXX,
                                                    XXXXXXX,                XXXXXXX,            XXXXXXX
    )
};
