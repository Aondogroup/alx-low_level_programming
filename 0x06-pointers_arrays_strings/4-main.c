#include "main.h"

/**
 * print_array - Prints an array of integers.
 *
 * @a: An array of integers.
 * @n: The number of elements in @a.
 *
 * Return: Nothing (void).
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	int n = sizeof(a) / sizeof(*a);

	printf("Original array: ");
	print_array(a, n);

	reverse_array(a, n);

	printf("Reversed array: ");
	print_array(a, n);

	return (0);
}

