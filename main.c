#include <stdio.h>
#include <unistd.h>

#include "display.h"

int main()
{
    printf("\033[?25l\033[2J\033[H");
    while (1)
    {
        clear_screen();
        print_string("0123456789abcdef", 16);
        draw_screen();
        usleep(1000000 / 60); // 60 Hz
    }
    printf("\033[?25h");
    return 0;
}
