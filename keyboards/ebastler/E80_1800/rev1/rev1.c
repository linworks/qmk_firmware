#include "rev1.h"

void matrix_init_kb(void) {
  matrix_init_user();
  led_init_ports();
}

void led_init_ports(void) {
    setPinOutput(B4);
    setPinOutput(B5);
    setPinOutput(B6);
}

bool led_update_kb(led_t led_state) {
    if (led_update_user(led_state)) {
        writePin(B6, !led_state.num_lock);
        writePin(B5, !led_state.caps_lock);
        writePin(B4, !led_state.scroll_lock);
    }
    return true;
}
