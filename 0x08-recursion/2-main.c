#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
char *str = "Corbin Coleman";
int len;

len = _strlen_recursion(str);
printf("Length of '%s': %d\n", str, len);

return (0);
}

