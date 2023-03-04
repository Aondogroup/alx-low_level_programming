#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers stored as strings
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer to store the result
 * @size_r: the size of the buffer
 *
 * Return: a pointer to the result, or 0 if the result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l1, l2, sum, carry;

	/* get lengths of input strings */
	for (l1 = 0; n1[l1]; l1++)
		;
	for (l2 = 0; n2[l2]; l2++)
		;

	/* check if result will fit in buffer */
	if (l1 + l2 + 1 > size_r)
		return (0);

	/* initialize variables */
	i = l1 - 1;
	j = l2 - 1;
	k = 0;
	carry = 0;

	/* loop through input strings, adding digits */
	while (i >= 0 || j >= 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		r[k] = sum % 10 + '0';
		carry = sum / 10;
		i--;
		j--;
		k++;
	}

	/* add final carry if necessary */
	if (carry)
	{
		if (k + 1 > size_r)
			return (0);
		r[k] = carry + '0';
		k++;
	}

	/* reverse string */
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		sum = r[i];
		r[i] = r[j];
		r[j] = sum;
	}

	/* add null terminator */
	r[k] = '\0';

	return (r);
}
