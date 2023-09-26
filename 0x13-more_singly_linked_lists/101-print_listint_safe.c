#include "lists.h"
/**
 * print_listint_safe - Prints a linked list with a Safe Version
 * @head: The first Node Pointer
 * Return: The number of Nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *Tmp = NULL;
	const listint_t *Line = NULL;
	size_t NewNode;
	size_t Val = 0;

	Tmp = head;
	while (Tmp)
	{
		printf("[%p] %d\n", (void *)Tmp, Tmp->n);
		Val++;
		Tmp = Tmp->next;
		Line = head;
		NewNode = 0;
		while (NewNode < Val)
		{
			if (Tmp == Line)
			{
				printf("-> [%p] %d\n", (void *)Tmp, Tmp->n);
				return (Val);
			}
			Line = Line->next;
			NewNode++;
		}
		if (!head)
			exit(98);
	}
	return (Val);
}
