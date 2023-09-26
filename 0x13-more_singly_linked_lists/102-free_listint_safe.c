#include "lists.h"

/**
 * free_listint_safe - Frees a linked list with a safe version
 * @h: The first Node Pointer
 * Return: The size of the list that was frred
 */
size_t free_listint_safe(listint_t **h)
{
	size_t Freed = 0;
	int NewNode;
	listint_t *Tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		NewNode = *h - (*h)->next;
		if (NewNode > 0)
		{
			Tmp = (*h)->next;
			free(*h);
			*h = Tmp;
			Freed++;
		}
		else
		{
			free(*h);
			*h = NULL;
			Freed++;
			break;
		}
	}

	*h = NULL;

	return (Freed);
}
