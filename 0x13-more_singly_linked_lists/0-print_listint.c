#include "lists.h"
#include <stdio.h>

/**
 *  * print_listint - Prints all the elements of a listint_t list.
 *   * @h: Pointer to the linked list.
 *    * Return: Number of nodes.
 *     */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h)
{
printf("-> %lu elements\n", (unsigned long)count);
h = h->next;
count++;
}
return (count);
}
