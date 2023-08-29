#ifndef LISTS_H
#define LISTS_H

/* Libraries */
#include <stddef.h>

/* Structures */
typedef struct listint_s
{
	    int n;
	        struct listint_s *next;
} listint_t;

/* Function Prototypes */
int _putchar(char c);
size_t print_listint(const listint_t *h);
/* Declare other function prototypes here */

#endif /* LISTS_H */

