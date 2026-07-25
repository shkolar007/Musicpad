/*Keymaps file*/
#include QMK_KEYBOARD_H

enum musicpad_layers {
    _BASE,
    _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Base layer
     * SW1: Play/Pause   SW2: Prev track   SW3: Next track
     * SW4: Mute         SW5: hold -> _FN  ENC_PUSH: Mute
     * Encoder: Volume down / Volume up
     */
    [_BASE] = LAYOUT(
        KC_MPLY, KC_MPRV, KC_MNXT, KC_MUTE, MO(_FN), KC_MUTE
    ),

    /*
     * Function layer (hold SW5)
     * SW1: RGB toggle   SW2: RGB mode    SW3: Hue -
     * SW4: Hue +        SW5: ---         ENC_PUSH: Bootloader
     * Encoder: Brightness down / Brightness up
     */
    [_FN] = LAYOUT(
        UG_TOGG, UG_NEXT, UG_HUED, UG_HUEU, KC_TRNS, QK_BOOT
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_FN]   = { ENCODER_CCW_CW(UG_VALD, UG_VALU) },
};
#endif
