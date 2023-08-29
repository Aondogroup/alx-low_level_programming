#ifndef LISTS_H
#define LISTS_H

/* Libraries */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/* Structures */
typedef struct listint_s
{
	    int n;
	        struct listint_s *next;
} listint_t;

/* Function Prototypes */
int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
/* Declare other function prototypes here */

#endif /* LISTS_H */
