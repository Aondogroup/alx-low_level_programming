#include "main.h"
#include <stdio.h>

/**
 * main - check the _strncpy function
 *
 * Return: Always 0
 */
int main(void)
{
    char s1[98] = {0};
    char *ptr;

    printf("s1 before strncpy: %s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("s1 after strncpy: %s\n", s1);
    printf("ptr after strncpy: %s\n", ptr);

    return (0);
}

