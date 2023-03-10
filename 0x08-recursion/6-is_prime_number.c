#include "main.h"
#include <math.h>

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
int i;

/* base cases */
if (n <= 1)
return (0);
if (n == 2)
return (1);

/* check if n is divisible by any number up to sqrt(n) */
for (i = 2; i <= sqrt(n); i++)
{
if (n % i == 0)
return (0);
}

/* n is prime */
return (1);
}
