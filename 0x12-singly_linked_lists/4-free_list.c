#include <stdlib.h>
#include "lists.h"

/**
 * free_list - it frees a linked list
 * @head: The head of the list which will be freed
 */

void free_list(list_t *head)
{
	list_t *the_node;

	while ((the_node = head) != NULL)
	{
		head = head->next;
		free(the_node->str);
		free(the_node);
	}
}
