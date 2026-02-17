/*
Copyright 2022 Danny Nguyen <danny@keeb.io>

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

// Enable RGB Matrix by default
#define RGB_MATRIX_DEFAULT_ON true

// Default mode (solid color)
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR

// Default color (HSV)
#define RGB_MATRIX_DEFAULT_HUE 180    // Cyan (0–255)
#define RGB_MATRIX_DEFAULT_SAT 255	//Saturation
#define RGB_MATRIX_DEFAULT_VAL 255	//Brightness

// Default speed (used for animated modes) (not used for solid mode, but safe to set)
#define RGB_MATRIX_DEFAULT_SPD 127

// Sync layer state across halves
#define SPLIT_LAYER_STATE_ENABLE

// TT(layer) - Layer Tap-Toggle.
#define TAPPING_TOGGLE 2