#include "lists.h"

/**
 * find_listint_loop - Function that finds the loop in a linked list
 * @head: THe first Noed ehich is pointed to
 * Return: address of the node where the loop starts, or NULL
 * if there is no longer a loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *LoopA = head;
	listint_t *LoopB = head;

	if (!head)
		return (NULL);

	while (LoopA && LoopB && LoopB->next)
	{
		LoopB = LoopB->next->next;
		LoopA = LoopA->next;
		if (LoopB == LoopA)
		{
			LoopA = head;
			while (LoopA != LoopB)
			{
				LoopA = LoopA->next;
				LoopB = LoopB->next;
			}
			return (LoopB);
		}
	}

	return (NULL);
}
