#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - This Adds a new node at the beginning of a list
 * @head: head of the linked list(double pointer to the list)
 * @str: string to store in the list(an d be add in th node)
 * Return: Address of the new Element, or Null if it fails
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
