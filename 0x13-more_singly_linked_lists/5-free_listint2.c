#include "lists.h"
/**
 * free_listint2 - Add a Free Space Function to the list listint-t
 * @head: pointer of the first node.
 */

void free_listint2(listint_t **head)
{
	listint_t *FreeEsp;

	if (head == NULL)
		return;
	while (*head)
	{
	FreeEsp = (*head)->next;
	free(*head);
	*head = FreeEsp;
	}
	*head = NULL;
}
