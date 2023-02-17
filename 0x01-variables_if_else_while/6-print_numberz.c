#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
/* putchar twice is allowed */
putchar(i + '0'); }
/* print new line */
putchar('\n');
    
/* Return value of 0 to indicate success */
return (0); }
