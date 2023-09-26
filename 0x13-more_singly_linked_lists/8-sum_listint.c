#include "lists.h"
/**
 * sum_listint - Writes a funstion That return the sum of Data in the list
 * @head: First Node of the list
 * Return: Gives Sum, if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int SumN;
	listint_t *NodeTmp;

	SumN = 0;
	NodeTmp = head;

	while (NodeTmp)
	{
	SumN += NodeTmp->n;
	NodeTmp = NodeTmp->next;
	}
	return (SumN);
}
