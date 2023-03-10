/**
 * factorial - computes the factorial of a given number.
 * @n: the number to compute the factorial of.
 *
 * Return: the factorial of n. If n is lower than 0, the function returns -1
 *         to indicate an error.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
