#include "lists.h"
/**
 * print_listint - Prints the Elements of a linked list
 * @h: The pointer of the head of the linked list (listint_t)
 * Return: Numer of nodes which is a number.
 */

size_t print_listint(const listint_t *h)
{
	size_t Num_nodes;

	Num_nodes = 0;
	while (h)
	{
		printf("%d\n", h->n);
		Num_nodes++;
		h = h->next;
	}
	return (Num_nodes);
}
