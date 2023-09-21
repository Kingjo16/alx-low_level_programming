#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the Elements of the given list
 * @h: Pointer to the Linked lists which are single
 *
 * Return: Elements in the List.
 */

size_t print_list(const list_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elem++;
	}
	return (elem);
}
