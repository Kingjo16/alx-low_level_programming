#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the 
 * End of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node inside the list
 * Return: address of the new element(head)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *the_current_node = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (the_current_node->next)
		the_current_node = the_current_node->next;

	the_current_node->next = new_node;

	return (new_node);
}
