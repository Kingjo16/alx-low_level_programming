#include "hash_tables.h"

/**
 * hash_table_delete - This will delate the hash table
 * @ht: This is the Pointer
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *new_node, *tempo;
	unsigned long int m;
	hash_table_t *hd = ht;

	for (m = 0; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			new_node = ht->array[m];
			while (new_node != NULL)
			{
				tempo = new_node->next;
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				new_node = tempo;
			}
		}
	}
	free(hd->array);
	free(hd);
}
