#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Number of Elements in a linked List will be returned
 * @h: A pointer to the list
 * Return: Number of elements in h(list).
 */
size_t list_len(const list_t *h)
{
	size_t nodes_num = 0;

	while (h != NULL)
	{
		nodes_num++;
		h = h->next;
	}
	return (nodes_num);
}
