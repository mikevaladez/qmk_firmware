#include QMK_KEYBOARD_H

#error SOURCE_C_IS_BEING_COMPILED

#ifdef RGB_MATRIX_ENABLE

static HSV layer_to_hsv(uint8_t layer) {
    switch (layer) {
        case 0:
            return (HSV){HSV_BLUE};

        case 1:
            return (HSV){HSV_GREEN};

        case 2:
            return (HSV){HSV_PURPLE};

        case 3:
            return (HSV){HSV_YELLOW};

        default:
            return (HSV){HSV_BLUE};
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
    return state;
}

bool rgb_matrix_indicators_user(void) {
    // Determine active layer
    uint8_t layer = get_highest_layer(layer_state);

    // Get the desired layer color
    HSV hsv = layer_to_hsv(layer);

    // Respect the keyboard's current RGB brightness setting
    if (hsv.v > rgb_matrix_get_val()) {
        hsv.v = rgb_matrix_get_val();
    }

    // Convert HSV to RGB
    RGB rgb = hsv_to_rgb(hsv);

    // Override every LED with the layer color
    rgb_matrix_set_color_all(rgb.r, rgb.g, rgb.b);

    // Prevent keyboard-level indicator code from overriding us
    return false;
}

#endif