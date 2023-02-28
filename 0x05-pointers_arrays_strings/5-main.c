#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char s[10] = "My School";

printf("%s\n", s);
rev_string(s);
printf("%s\n", s);
return (0);
}
