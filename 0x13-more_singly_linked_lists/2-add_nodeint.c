#include "lists.h"

/**
 * add_nodeint - Add new Node at the Beginning of The List.
 * @head: it Points to very first node of the list.
 * @n: the New Node data to be inserted.
 * add_nodeint: Addes a new Node
 * Return: Pointer to the AddedNode which is new, fails null.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *AddedNode;

	AddedNode = malloc(sizeof(listint_t));
	if (!AddedNode)
		return (NULL);
	AddedNode->n = n;
	AddedNode->next = *head;
	*head = AddedNode;

	return (AddedNode);
}
