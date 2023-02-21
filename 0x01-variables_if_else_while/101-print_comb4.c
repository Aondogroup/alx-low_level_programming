#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits.
 *              The three digits must be different and in ascending order.
 *              Numbers must be separated by ", ", followed by a space.
 *              No trailing comma at the end.
 *              012, 120, 102, 021, 201, 210 are considered the same combination.
 *              Print only the smallest combination of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;

for (i = 0; i <= 7; i++)
{
for (j = i + 1; j <= 8; j++)
{
for (k = j + 1; k <= 9; k++)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i == 7 && j == 8 && k == 9)
break;

putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
