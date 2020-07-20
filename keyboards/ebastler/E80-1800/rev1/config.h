/*
Copyright 2020 Moritz Plattner

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6562
#define PRODUCT_ID      0x1338
#define DEVICE_VER      0x0001
#define MANUFACTURER    ebastler
#define PRODUCT         E80-1800
#define DESCRIPTION     Custom Mechanical Keyboard

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 19

#define MATRIX_ROW_PINS { B7, B3, D2, C12, C11, C10, A15 }
#define MATRIX_COL_PINS { A1, A0, C3, C2, F1, F0, C15, C14, C13, C4, C5, B0, B1, B2, B9, A13, A8, C9, C10 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW
#define DEBOUNCE 5

/* Backlight */
#define BACKLIGHT_PIN A9
#define BACKLIGHT_BREATHING
#define BACKLIGHT_PWM_DRIVER PWMD1
#define BACKLIGHT_PWM_CHANNEL 2
#define BACKLIGHT_PAL_MODE 2
#define BACKLIGHT_LEVELS 6
#define BACKLIGHT_ON_STATE 1

/* ADC */
#define ADC_PIN C0