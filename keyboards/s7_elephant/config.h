#pragma once

#include "config_common.h"

/* Don't remove this without also removing EXTRAFLAGS in rules.mk*/
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
