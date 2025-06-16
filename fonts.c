#include "fonts.h"

const uint8_t fonts[NUM_FONTS][FONT_HEIGHT] = { 
    { 0b1110, 0b1010, 0b1010, 0b1010, 0b1110 }, // 0
    { 0b0100, 0b0100, 0b0100, 0b0100, 0b0100 }, // 1
    { 0b1110, 0b0010, 0b1110, 0b1000, 0b1110 }, // 2
    { 0b1100, 0b0010, 0b1100, 0b0010, 0b1100 }, // 3
    { 0b0010, 0b0110, 0b1010, 0b1110, 0b0100 }, // 4
    { 0b1110, 0b1000, 0b1110, 0b0010, 0b1110 }, // 5
    { 0b0010, 0b0100, 0b1110, 0b1010, 0b1100 }, // 6
    { 0b1110, 0b0010, 0b1110, 0b0100, 0b1000 }, // 7
    { 0b1110, 0b1010, 0b1110, 0b1010, 0b1110 }, // 8
    { 0b1110, 0b1010, 0b1110, 0b0100, 0b1000 }, // 9
    { 0b0100, 0b1010, 0b1010, 0b1110, 0b1010 }, // A
    { 0b1100, 0b1010, 0b1100, 0b1010, 0b1100 }, // B
    { 0b1110, 0b1000, 0b1000, 0b1000, 0b1110 }, // C
    { 0b1100, 0b1010, 0b1010, 0b1010, 0b1100 }, // D
    { 0b1110, 0b1000, 0b1110, 0b1000, 0b1110 }, // E
    { 0b1110, 0b1000, 0b1110, 0b1000, 0b1000 }, // F
};



bool check_char(char c)
{
    if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'))
    {
        return true;
    }
    return false;
}

uint8_t get_index(char c)
{
    switch (c)
    {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        case 'a': 
        case 'A': return 10;
        case 'b':
        case 'B': return 11;
        case 'c':   
        case 'C': return 12;
        case 'd':
        case 'D': return 13;
        case 'e':
        case 'E': return 14;
        case 'f':
        case 'F': return 15;
    }
}

const uint8_t (*get_font(char c))[FONT_HEIGHT]
{
    if (!check_char(c))
    {
        return NULL;
    }
    uint8_t index = get_index(c);
    return &fonts[index];
}
