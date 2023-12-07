#include "lists.h"

/**
 * dlistint_len - This gives the num of elem in a list
 * @h: this is the head of the list
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int numb;

	numb = 0;

	if (h == NULL)
		return (numb);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		numb++;
		h = h->next;
	}
	return (numb);
}
