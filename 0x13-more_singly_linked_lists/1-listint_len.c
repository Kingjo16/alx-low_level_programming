#include "lists.h"
/**
 * listint_len - Number of Elements in a Single inked list
 * @h: Pointer of the linked list starter to travese.
 * Return: Numberof Elements in the given node.
 */

size_t listint_len(const listint_t *h)
{
	size_t NumElements;

	NumElements = 0;

	while (h)
	{
		NumElements++;
		h = h->next;
	}
	return (NumElements);
}
