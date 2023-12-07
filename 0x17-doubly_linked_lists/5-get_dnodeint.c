#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a list
 * @head: Pointer to the head of the list.
 * @index: Index of the given node.
 * Return: NULL and head of the node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	count = 0;
	while (head != NULL)
	{
		if (count == index)
			break;

		head = head->next;
		count++;
	}
	return (head);
}
