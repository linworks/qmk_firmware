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
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6465
#define DEVICE_VER      0x0001
#define MANUFACTURER    ebastler
#define PRODUCT         isome tria-75
#define DESCRIPTION     Custom Mechanical Keyboard

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 16

#define MATRIX_ROW_PINS { A15, B4, B5, B6, B7, B8}
#define MATRIX_COL_PINS { B12, B13, B14, B15, A8, A10, A13, A14, B9, C13, F0, F1, A0, B2, B10, B11 }
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
#define BACKLIGHT_LEVELS 5
#define BACKLIGHT_ON_STATE 1


/* Underglow */
#define RGB_DI_PIN B3
#define RGBLED_NUM 17
#define WS2812_PWM_DRIVER PWMD2
#define WS2812_PWM_CHANNEL 2
#define WS2812_PWM_PAL_MODE 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM2
#define WS2812_DMA_CHANNEL 2


/* Rotary encoder */
#define ENCODERS_PAD_A { C15 }
#define ENCODERS_PAD_B { C14 }
#define ENCODER_RESOLUTION 4

/* ADC */
#define ADC_PIN B0