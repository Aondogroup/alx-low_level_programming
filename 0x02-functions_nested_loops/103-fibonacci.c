#include "main.h"
#include <stdio.h>

/**
 * main - Prints the sum of the even-valued Fibonacci terms up to 4000000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 1, b = 1, sum = 0, next;
while (a <= 4000000)
{
if (a % 2 == 0)
sum += a;
next = a + b;
a = b;
b = next;
}
printf("%d\n", sum);
return (0);
}
