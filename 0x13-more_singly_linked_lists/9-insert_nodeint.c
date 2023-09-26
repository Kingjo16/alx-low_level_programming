#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node @ a given Position
 * @head: Pointer to the first Node od the list
 * @idx: Index wher the node is added
 * @n: The new Node data
 * Return: Pointer to the new node Address, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *NewNode, *tmp = *head;
	unsigned int k;

	NewNode = malloc(sizeof(listint_t));
	if (!NewNode || !head)
		return (NULL);

	NewNode->n = n;
	NewNode->next = NULL;

	if (idx == 0)
	{
		NewNode->next = *head;
		*head = NewNode;
		return (NewNode);
	}

	for (k = 0; tmp && k < idx; k++)
	{
		if (k == (idx - 1))
		{
			NewNode->next = tmp->next;
			tmp->next = NewNode;
			return (NewNode);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
