#include "lists.h"
/**
 * free_listint - This Function Frees a Listint_tlist
 * @head: The Pointer which will be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *Freespc;

	while (head)
	{
		Freespc = head->next;
		free(head);
		head = Freespc;
	}
}
