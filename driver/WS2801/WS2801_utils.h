#ifndef ___WS2801_UTILS_H
#define ___WS2801_UTILS_H

#include "LPC11xx.h"
#include "WS2801.h"

void rainbow(Strip* strip, uint8_t wait);

uint32_t wheel(uint8_t position);

uint32_t interpolation(uint32_t color1, uint32_t color2);

#endif

