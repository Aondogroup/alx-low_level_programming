#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
/* Standard Libraries */
#include <stdio.h>

/* Function Prototypes */
void reverse_array(int *a, int n);
char *rot13(char *);
char *string_toupper(char *);
int _putchar(char c);
void print_number(int n);
char *leet(char *);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *_strncat(char *dest, char *src, int n);
void print_buffer(char *b, int size);
char *cap_string(char *);
char *_strcat(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);

#endif /* MAIN_H */
