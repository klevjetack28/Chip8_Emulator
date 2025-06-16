#ifndef FONTS_H
#define FONTS_H

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#define FONT_HEIGHT 5
#define FONT_WIDTH 4
#define NUM_FONTS 16

bool check_char(char c);
uint8_t get_index(char c);
const uint8_t (*get_font(char c))[FONT_HEIGHT];

#endif // FONTS_H
