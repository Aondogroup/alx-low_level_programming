#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to search for.
 *
 * Return: If the substring is found, return a pointer to the beginning of the
 * substring in the haystack. Otherwise, return NULL.
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, k;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = i, k = 0; needle[k] != '\0' && haystack[j] == needle[k]; j++, k++)
{
;
}

if (needle[k] == '\0')
{
return (haystack + i);
}
}

return (NULL);
}
