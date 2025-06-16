#include "fonts.h"

const uint8_t fonts[NUM_FONTS][FONT_HEIGHT] = { 
    { 0b11100000, 0b10100000, 0b10100000, 0b10100000, 0b11100000 }, // 0
    { 0b01000000, 0b01000000, 0b01000000, 0b01000000, 0b01000000 }, // 1
    { 0b11100000, 0b00100000, 0b11100000, 0b10000000, 0b11100000 }, // 2
    { 0b11000000, 0b00100000, 0b11000000, 0b00100000, 0b11000000 }, // 3
    { 0b00100000, 0b01100000, 0b10100000, 0b11100000, 0b01000000 }, // 4
    { 0b11100000, 0b10000000, 0b11100000, 0b00100000, 0b11100000 }, // 5
    { 0b00100000, 0b01000000, 0b11100000, 0b10100000, 0b11000000 }, // 6
    { 0b11100000, 0b00100000, 0b11100000, 0b01000000, 0b10000000 }, // 7
    { 0b11100000, 0b10100000, 0b11100000, 0b10100000, 0b11100000 }, // 8
    { 0b11100000, 0b10100000, 0b11100000, 0b01000000, 0b10000000 }, // 9
    { 0b01000000, 0b10100000, 0b10100000, 0b11100000, 0b10100000 }, // A
    { 0b11000000, 0b10100000, 0b11000000, 0b10100000, 0b11000000 }, // B
    { 0b11100000, 0b10000000, 0b10000000, 0b10000000, 0b11100000 }, // C
    { 0b11000000, 0b10100000, 0b10100000, 0b10100000, 0b11000000 }, // D
    { 0b11100000, 0b10000000, 0b11100000, 0b10000000, 0b11100000 }, // E
    { 0b11100000, 0b10000000, 0b11100000, 0b10000000, 0b10000000 }, // F
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
