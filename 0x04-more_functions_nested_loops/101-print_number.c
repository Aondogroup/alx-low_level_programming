#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: integer to print
 */
void print_number(int n)
{
int i, k, digits, divisor, tmp;

if (n < 0)
{
_putchar('-');
n = -n;
}

tmp = n;
digits = 0;

while (tmp > 0)
{
tmp /= 10;
digits++;
}

divisor = 1;
for (i = 1; i < digits; i++)
divisor *= 10;

for (i = 0; i < digits; i++)
{
k = n / divisor;
_putchar(k + '0');
n -= k * divisor;
divisor /= 10;
}

if (digits == 0)
_putchar('0');
}
