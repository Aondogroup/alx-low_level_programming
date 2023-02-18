#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0 on success
 */
int main(void)
{
int num = 48;
while (num <= 57)
{
putchar(num++);
if (num <= 57)
{
putchar(',');
putchar(' ');
}}
putchar('\n');

return (0);
}
