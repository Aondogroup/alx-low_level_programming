#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (_sqrt_recursion_helper(n, 1, n));
}

/**
 * _sqrt_recursion_helper - finds the natural square root of a number within
 * a given range
 * @n: the number to find the square root of
 * @min: the minimum possible square root
 * @max: the maximum possible square root
 *
 * Return: the natural square root of n within the range of min to max, or -1
 * if there is no natural square root within that range
 */
int _sqrt_recursion_helper(int n, int min, int max)
{
int mid;

if (max < min)
return (-1);

mid = (min + max) / 2;
if (mid * mid == n)
return (mid);

if (mid * mid > n)
return (_sqrt_recursion_helper(n, min, mid - 1));
else
return (_sqrt_recursion_helper(n, mid + 1, max));
}

