#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @c: the character to fill the memory with
 * @n: the number of bytes to be filled starting from s
 *
 * Return: a pointer to the filled memory area @s
 */
void *_memset(void *s, int c, size_t n)
{
unsigned char *p = s;
while (n--)
*p++ = (unsigned char)c;
return s;
}
