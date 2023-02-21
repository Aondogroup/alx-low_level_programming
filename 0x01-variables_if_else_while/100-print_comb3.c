#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 *              The two digits must be different and in ascending order.
 *              Numbers must be separated by ", ", followed by a space.
 *              No trailing comma at the end.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i < 9; i++)
{
for (j = i + 1; j <= 9; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i == 8 && j == 9)
break;
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
