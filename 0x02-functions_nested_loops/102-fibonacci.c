#include "main.h"
#include <stdio.h>
/**
 * main - Entry point, prints the first 50 numbers of Fibonacci sequence
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 1, b = 1, i;
int next;

for (i = 0; i < 50; i++)
{
printf("%d", a);
if (i < 49)
printf(", ");
next = a + b;
a = b;
b = next;
}
printf("\n");
return (0);
}
