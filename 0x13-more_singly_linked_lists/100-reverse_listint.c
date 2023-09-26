#include "lists.h"
/**
 * reverse_listint - A function That Reverse a linked list (listint_t)
 * @head: The first Node Pointer
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *Rev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = Rev;
		Rev = *head;
		*head = next;
	}

	*head = Rev;

	return (*head);
}
