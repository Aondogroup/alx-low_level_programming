#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *  * print_listint_safe - Prints a listint_t linked list.
 *   * @head: Pointer to the head node of the list.
 *    * Return: Number of nodes in the list.
 *     */
size_t print_listint_safe(const listint_t *head)
{
	    size_t node_count = 0;
	        const listint_t *slow = head, *fast = head;

		    while (slow && fast && fast->next)
			        {
					        printf("[%p] %d\n", (void *)slow, slow->n);
						        node_count++;
							        slow = slow->next;
								        fast = fast->next->next;

									        if (slow == fast)
											        {
													            printf("-> [%p] %d\n", (void *)slow, slow->n);
														                exit(98);
																        }
										    }

		        while (head)
				    {
					            printf("[%p] %d\n", (void *)head, head->n);
						            node_count++;
							            head = head->next;
								        }

			    return (node_count);
}

