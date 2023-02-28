#include "main.h"

/**
 * main - test the print_array function
 *
 * Return: Always 0
 */
int main(void)
{
int array[5] = { 98, 402, -198, 298, -1024 };
int n = sizeof(array) / sizeof(array[0]);

print_array(array, n);

return (0);
}
