#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: times table size (0 <= n <= 15)
 *
 * Return: void
 */
void print_times_table(int n)
{
int i, j, res;

if (n < 0 || n > 15)
return;

for (i = 0; i <= n; i++)
{
_putchar('0');
for (j = 1; j <= n; j++)
{
res = i * j;
_putchar(',');
_putchar(' ');
if (res < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(res + '0');
}
else if (res < 100)
{
_putchar(' ');
_putchar(res / 10 + '0');
_putchar(res % 10 + '0');
}
else
{
_putchar(res / 100 + '0');
_putchar(res % 100 / 10 + '0');
_putchar(res % 10 + '0');
}
}
_putchar('\n');
}
}

