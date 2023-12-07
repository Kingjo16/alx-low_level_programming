#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given pos.
 * @h: Pointer
 * @idx: Index of the new node.
 * @n: This is the Value of the new node
 * Return: The add new node NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *cur_node;
	unsigned int count;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		cur_node = *h;
		count = 1;
		if (cur_node != NULL)
			while (cur_node->prev != NULL)
				cur_node = cur_node->prev;

		while (cur_node != NULL)
		{
			if (count == idx)
			{
				if (cur_node->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = cur_node->next;
						new_node->prev = cur_node;
						cur_node->next->prev = new_node;
						cur_node->next = new_node;
					}
				}
				break;
			}
			cur_node = cur_node->next;
			count++;
		}
	}
	return (new_node);
}
