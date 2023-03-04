#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
	char *p = s;
	int i;

	while (*s)
	{
		if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
		{
			*s += 13;
		}
		else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
		{
			*s -= 13;
		}
		s++;
	}

	for (i = 0; p[i]; i++)
		;

	return (p);
}

