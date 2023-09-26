#include "lists.h"

/**
 * delete_nodeint_at_index - A Function that Delete the node of a list
 * @head: First Element Pointer
 * @index: Index of the node to Delete
 * Return: 1 (Succeeded), or -1 (Failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *TmpNode = *head;
	listint_t *DelNode = NULL;
	unsigned int Insert = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(TmpNode);
		return (1);
	}

	while (Insert < index - 1)
	{
		if (!TmpNode || !(TmpNode->next))
			return (-1);
		TmpNode = TmpNode->next;
		Insert++;
	}


	DelNode = TmpNode->next;
	TmpNode->next = DelNode->next;
	free(DelNode);

	return (1);
}
