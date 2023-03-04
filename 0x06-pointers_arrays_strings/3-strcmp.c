#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: negative value if s1 is less than s2, positive value if s1 is greater
 * than s2, and 0 if they are equal
 */
int _strcmp(char *s1, char *s2)
{
    int i;

    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }

    if (s1[i] != '\0')
        return (s1[i]);
    else if (s2[i] != '\0')
        return (-s2[i]);

    return (0);
}

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}

