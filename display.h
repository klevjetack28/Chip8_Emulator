#ifndef DISPLAY_H
#define DISPLAY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

#define SCREEN_WIDTH 64
#define SCREEN_HEIGHT 32
#define CHAR_WIDTH 4
#define CHAR_HEIGHT 5
#define SPRITE_WIDTH 8

#include "fonts.h"
#include "memory.h"

bool check_bounds(int x, int y);
void clear_screen();
void draw_pixel(int x, int y, bool on);
void print_char(int x, int y, char c);
void print_string(char *string, int length);
void draw_screen();

#endif // DISPLAY_H
