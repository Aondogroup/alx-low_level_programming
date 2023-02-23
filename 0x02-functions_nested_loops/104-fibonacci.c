#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int i, count;
unsigned long int fib1 = 1, fib2 = 2, next_fib;

count = 98;

_putchar('0' + fib1);
_putchar(',');
_putchar(' ');

_putchar('0' + fib2);
_putchar(',');
_putchar(' ');

for (i = 3; i <= count; i++)
{
next_fib = fib1 + fib2;

_putchar('0' + next_fib);
if (i != count)
{
_putchar(',');
_putchar(' ');
}

fib1 = fib2;
fib2 = next_fib;
}

_putchar('\n');
return (0);
}
