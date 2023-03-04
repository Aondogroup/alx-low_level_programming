#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the contents of a buffer in a specific format.
 *
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 *
 * Return: void.
 */
void print_buffer(char *b, int size)
{
    int i, j;

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = 0; j < 10; j++)
        {
            if (j + i >= size)
                printf("  ");
            else
                printf("%02x", *(b + j + i));

            if (j % 2 == 1)
                printf(" ");
        }

        for (j = 0; j < 10; j++)
        {
            if (j + i >= size)
                break;

            if (*(b + j + i) >= 32 && *(b + j + i) <= 126)
                printf("%c", *(b + j + i));
            else
                printf(".");
        }

        printf("\n");
    }
}

