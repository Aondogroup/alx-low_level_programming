#include "lists.h"

/**
 *  * free_listint_safe - Frees a listint_t list.
 *   * @h: Pointer to a pointer to the head of the list.
 *    * Return: Size of the list that was freed.
 *     */
size_t free_listint_safe(listint_t **h)
{
	    size_t count = 0;
	        listint_t *slow, *fast, *temp;

		    if (h == NULL)
			            return (count);
		     slow = *h;
		         fast = *h;

			     while (fast != NULL && fast->next != NULL)
				         {
						         slow = slow->next;
							         fast = fast->next->next;

								         if (slow == fast) 
										  {
											              *h = NULL;
												                  break;
														          }
									     }
			     if (fast == NULL || fast->next == NULL)
				         {
						  while (slow != NULL)
							          {
									              count++;
										                  temp = slow;
												              slow = slow->next;
													                  free(temp);
															          }
						      }
			      *h = NULL;
			          return (count);
}
