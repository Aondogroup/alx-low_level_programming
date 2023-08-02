#include "main.h"
/**
 * _puts_recursion -print a string followed by a new line , using recursion
 * 
 * @s: Pointer to the string to be printed.
 */

/*custom implementation of _puts_recursion */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
