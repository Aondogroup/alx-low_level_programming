#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers starting with 1, 2
 * separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
long int prev = 1, curr = 2, next;

printf("%ld, %ld", prev, curr);

for (i = 3; i <= 50; i++)
{
next = prev + curr;
printf(", %ld", next);
prev = curr;
curr = next;
}

printf("\n");
return (0);
}
