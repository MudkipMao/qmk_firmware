#ifndef S7_ELEPHANT_H
#define S7_ELEPHANT_H

#include "quantum.h"

#if defined(KEYBOARD_s7_elephant_rev1)
  #include "rev1.h"
#elif defined(KEYBOARD_s7_elephant_rev2)
  #include "rev2.h"
#endif // S7 Elephant revisions

#endif // S7_ELEPHANT_H
