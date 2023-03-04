#include <stdio.h>
/**
 * main - Finds the largest prime factor of a given number.
 *
 * Return: Always 0.
 */
int main(void)
{
long int n = 612852475143;
long int i;

for (i = 2; i <= n; i++)
{
while (n % i == 0)
{
n /= i;
}
}

printf("%ld\n", i - 1);

return 0;
}
