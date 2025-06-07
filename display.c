#include "display.h"

int display()
{
    char screen[(HEIGHT * (WIDTH + 1)) + 1]; // The +1 next to WIDTH is for new line characters
    printf("%ld\n", sizeof(screen));
    int point, i, j, index, reset;
    while (1)
    {
        for (point = 0; point < HEIGHT * (WIDTH + 1); point++)
        {
            for (i = 0; i < HEIGHT; i++)
            {
                for (j = 0; j < WIDTH + 1; j++)
                {
                    index = (i * (WIDTH + 1)) + j;
                    if (point == index)
                    {
                        screen[index] = 'O';
                    }
                    else if (j == WIDTH)
                    {
                        screen[index] = '\n';
                    }
                    else
                    {
                        screen[index] = 'X';
                    }
                }
            }
            screen[HEIGHT * (WIDTH + 1)] = '\0';
            printf("%s", screen);
            for (reset = 0; reset < HEIGHT + 1; reset++)
            {
                printf("\033[2J\033[H");
            }
        }
    }
    return 0;
}
