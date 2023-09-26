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
	unsigned int Insert;
	listint_t *NewNode;
	listint_t *TmpNode = *head;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode || !head)
		return (NULL);

	NewNode->n = n;
	NewNode->next = NULL;

	if (idx == 0)
	{
	NewNode->next = *head;
	*head = NewNode;
	return (NewNode);
	}
	for (Insert = 0; TmpNode && Insert < idx; Insert++)
	{
	if (Insert == idx - 1)
	{
		NewNode->next = TmpNode->next;
	TmpNode->next = NewNode;
	return (NewNode);
	}
	else
		TmpNode = TmpNode->next;
	}
	return (NULL);
}
