#include "lists.h"

/**
 * delete_dnodeint_at_index - This Deletes the node at an index of a list
 * @head: Pointer to the head of the list.
 * @index: The delated index node
 * Return: 1 and -1 for success and fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur_node, *prev_node;
	unsigned int count;

	cur_node = *head;
	if (cur_node != NULL)
		while (cur_node->prev != NULL)
			cur_node = cur_node->prev;
	count = 0;

	while (cur_node != NULL)
	{
		if (count == index)
		{
			if (count == 0)
			{
				*head = cur_node->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				prev_node->next = cur_node->next;

				if (cur_node->next != NULL)
					cur_node->next->prev = prev_node;
			}
			free(cur_node);
			return (1);
		}
		prev_node = cur_node;
		cur_node = cur_node->next;
		count++;
	}
	return (-1);
}
