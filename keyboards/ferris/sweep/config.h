/* Copyright 2018-2020
ENDO Katsuhiro <ka2hiro@curlybracket.co.jp>
David Philip Barr <@davidphilipbarr>
Pierre Chevalier <pierrechevalier83@gmail.com>

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

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

#define DIRECT_PINS                                                                                          \
    {                                                                                                        \
        {D1, F6, F5, D0, D4}, {B3, B1, F7, D7, C6}, {B2, B6, E6, B4, B5}, { D5, C7, F1, NO_PIN, NO_PIN } \
    }

#define DIRECT_PINS_RIGHT                                                                                    \
    {                                                                                                        \
        {D1, D0, D4, F6, F5}, {D7, B3, C6, B1, F7}, {B5, B4, E6, B6, B2}, { D5, C7, F1, NO_PIN, NO_PIN } \
    }


/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D2

#define EE_HANDS
/* qmk flash -kb <keyboard> -km <keymap> -bl <bootloader>
 * My bootloader is dfu-split-left, dfu-split-right
*/

/* Top left key on left half */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
/* Top right key on right half */
#define BOOTMAGIC_LITE_ROW_RIGHT 4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 4
