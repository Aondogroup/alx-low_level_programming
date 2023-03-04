#include "main.h"

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to use from src
 *
 * Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, const char *src, size_t n)
{
    size_t dest_len = _strlen(dest);
    size_t j;

    for (j = 0; j < n && src[j] != '\0'; j++)
    {
        dest[dest_len + j] = src[j];
    }
    dest[dest_len + j] = '\0';

    return dest;
}

/**
 * _strlen - compute the length of a string
 * @s: a pointer to the string to measure
 *
 * Return: the number of characters in the string
*/
size_t _strlen(const char *s)
{
    size_t len = 0;

    while (*s != '\0')
    {
        len++;
        s++;
    }

    return len;
}

