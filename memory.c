#include "memory.h"

uint8_t rev8(uint8_t n)
{
    n = (((n & 0xa) >> 1) | ((n & 0x5) << 1));
    return ((n >> 2) | (n << 2));
}
