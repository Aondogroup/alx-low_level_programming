#include "main.h"

/**
 * is_prime - checks if a number is prime
 * @n: the number to check
 * @i: the iterator
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime(int n, int i)
{
    if (n <= 1)
        return (0);
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return (1);
    if (n % i == 0)
        return (0);
    if (i > n / 2)
        return (1);
    return (is_prime(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return (1);
    return (is_prime(n, 2));
}
