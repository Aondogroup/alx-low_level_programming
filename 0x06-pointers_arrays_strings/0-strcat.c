#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0, i = 0;

/* Find the length of dest string */
while (dest[dest_len] != '\0')
dest_len++;

/* Copy the src string to the end of dest string */
while (src[i] != '\0')
{
dest[dest_len + i] = src[i];
i++;
}

/* Add the terminating null byte */
dest[dest_len + i] = '\0';

/* Return the resulting string */
return dest;
}
