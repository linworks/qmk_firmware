#include "rev1.h"

static bool is_suspended, backlight_enabled;
extern backlight_config_t backlight_config;


void matrix_init_kb(void) {
  matrix_init_user();
}

/* turn backlight (if enabled) off on USB host suspend */
void suspend_power_down_user(void) {
#ifdef BACKLIGHT_ENABLE
    if (!is_suspended) {
        is_suspended = true;
        backlight_enabled = backlight_config.enable;
        backlight_disable();
    }
#endif
}

/* turn backlight (if enabled) on on USB host wakeup */
void suspend_wakeup_init_user(void) {
#ifdef BACKLIGHT_ENABLE
    is_suspended = false;
    if (backlight_enabled) {
        backlight_enable();
    }
#endif
}