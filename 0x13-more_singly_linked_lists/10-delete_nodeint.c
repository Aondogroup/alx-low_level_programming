#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *  * delete_nodeint_at_index - Deletes the node at a given index of a listint_t list.
 *   * @head: Pointer to a pointer to the head node.
 *    * @index: Index of the node to be deleted. Index starts at 0.
 *     * Return: 1 if succeeded, -1 if failed.
 *      */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	    listint_t *current, *previous;
	        unsigned int i;

		    if (*head == NULL)
			            return (-1);

		        if (index == 0)
				    {
					            current = *head;
						            *head = current->next;
							            free(current);
								            return (1);
									        }

			    current = *head;
			        previous = NULL;
				    for (i = 0; i < index && current != NULL; i++)
					        {
							        previous = current;
								        current = current->next;
									    }

				        if (current == NULL)
						        return (-1);

					    previous->next = current->next;
					        free(current);

						    return (1);
}

