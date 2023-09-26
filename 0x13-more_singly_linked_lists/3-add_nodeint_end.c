#include "lists.h"
/**
 * add_nodeint_end - This addes a new node at the end of the list.
 * @head: A pointer To the First Element of the list
 * @n: The New Element to be added in the end.
 * Return: Pointer to tthe new Node aDed at the end, fails Null.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewEndNode;
	listint_t *Newtemp = *head;

	NewEndNode = malloc(sizeof(listint_t));
	if (!NewEndNode)
		return (NULL);
	NewEndNode->n = n;
	NewEndNode->next = NULL;

	if (*head == NULL)
	{
	*head = NewEndNode;
	return (NewEndNode);
	}


	while (Newtemp->next)
		Newtemp = Newtemp->next;
	Newtemp->next = NewEndNode;
	return (NewEndNode);
}
