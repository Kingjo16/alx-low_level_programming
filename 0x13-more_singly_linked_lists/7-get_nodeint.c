#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at the nth node of a list
 * @head: The first Node in the Linked List.
 * @index: The return od the node which is the index.
 * Return: Pointer to the node we are looking for
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int Index = 0;
	listint_t *NodeTmp = head;

	while (NodeTmp && Index < index)
	{
	NodeTmp = NodeTmp->next;
	Index++;
	}
	return (NodeTmp ? NodeTmp : NULL);
}
