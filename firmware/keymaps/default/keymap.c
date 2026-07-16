#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_MSEL,           // SW1 (Top Key)
        KC_MPRV,        // SW2 (Bottom Left)
        KC_MNXT,        // SW3 (Bottom Right)
        KC_MPLY,           // SW4 (Bottom Middle)
        KC_MUTE            // SW5 (Encoder Click)
    )
};
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) } 
};
#ifdef OLED_ENABLE
bool oled_task_user(void) {
    oled_write_P(PSTR("XIAO Macropad\n"), false);
    oled_write_P(PSTR("Layer: Base\n"), false);
    return false;
}
#endif
