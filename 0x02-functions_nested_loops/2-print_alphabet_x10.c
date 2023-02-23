#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
char letter;
int i, j;

for (i = 0; i < 10; i++)
{
letter = 'a';
for (j = 0; j < 26; j++)
        {
_putchar(letter);
letter++;
}
_putchar('\n');
}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
