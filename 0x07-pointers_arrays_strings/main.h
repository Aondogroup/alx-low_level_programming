#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stddef.h>
/* function prototype */
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
void *_memcpy(void *dest, const void *src, size_t n);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void *_memset(void *s, int c, size_t n);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif /* MAIN_H */

