#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 */
void print_rev(char *s)
{
int len = _strlen(s);

for (int i = len - 1; i >= 0; i--)
_putchar(s[i]);

_putchar('\n');
}
