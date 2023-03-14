#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * containing a copy of the string given as a parameter.
 *
 * @str: the string to duplicate
 *
 * Return: pointer to duplicated string on success, NULL on failure
 */
char *_strdup(char *str)
{
    char *new_str;
    int i, len = 0;

    if (str == NULL)
        return (NULL);

    while (str[len])
        len++;

    new_str = malloc(sizeof(char) * (len + 1));

    if (new_str == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
        new_str[i] = str[i];

    return (new_str);
}
