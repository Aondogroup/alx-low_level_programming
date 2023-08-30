#include "main.h"

/**
 * reversePrintRecursion - Prints a string in reverse using recursion
 * @s: The input string
 *
 * Description: This function prints a given string in reverse order using recursion.
 */
void _print_rev_recursion(char *s) {
if (*s == '\0')
{
return; /* Base case: If the end of the string is reached, exit the function */
}

_print_rev_recursion(s + 1); /* Call the function recursively with the next character */
_putchar(*s); /* Print the current character after all recursive calls are completed */
}
