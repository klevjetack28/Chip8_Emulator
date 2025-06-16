#include "display.h"

char screen[SCREEN_HEIGHT][SCREEN_WIDTH + 1]; // +1 in the width for new lines

bool check_bounds(int x, int y)
{
    if (x >= SCREEN_WIDTH || x < 0)
    {
        return false;
    }
    if (y >= SCREEN_HEIGHT || y < 0)
    {
        return false;
    }
    return true;
}

void clear_screen()
{
    for (int y = 0; y < SCREEN_HEIGHT; y++)
    {
        for (int x = 0; x < SCREEN_WIDTH; x++)
        {
            draw_pixel(x, y, false);
        }
        screen[y][SCREEN_WIDTH] = '\0';
    }
}

void draw_pixel(int x, int y, bool on)
{
    if (check_bounds(x, y))
    {
        screen[y][x] = on ? '#' : ' ';
    }
}

void print_char(int x, int y, char c)
{
    const uint8_t (*bits)[FONT_HEIGHT] = get_font(c);
    uint8_t row;
    bool on;
    for (int i = 0; i < CHAR_HEIGHT; i++)
    {
        row = (*bits)[i];
        for (int j = 0; j < CHAR_WIDTH; j++)
        {
            on = (row & (0b10000000 >> j)) ? 1 : 0;
            if (on)
            {
                draw_pixel(j + x, i + y, true); 
            }
        }
    }
}

void print_string(char *string, int length)
{
    for (int i = 0; i < length; i++)
    {
        print_char(i * CHAR_WIDTH, 0, *string++);
    }
}

void draw_screen()
{
    printf("\033[H");
    for (int y = 0; y < SCREEN_HEIGHT; y++)
    {
        printf("%s\n", screen[y]);
    }
    fflush(stdout);
}
