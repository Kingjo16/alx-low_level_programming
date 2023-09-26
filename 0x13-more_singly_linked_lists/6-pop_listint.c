#include "lists.h"
/**
 * pop_listint - Function that Deletes the head node of a list.
 * @head: a Pointer to the First Element in the linked list
 * Return: The Head of Node's Data(n), 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *HeadNode;
	int Num_Nodes;

	if (!head || !*head)
		return (0);
	Num_Nodes = (*head)->n;
	HeadNode = (*head)->next;
	free(*head);
	*head = HeadNode;
	return (Num_Nodes);
}
