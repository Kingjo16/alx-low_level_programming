#include "hash_tables.h"

/**
 * hash_table_print - This will print the Hash table
 * @ht: THis is The POInter
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int m;
	unsigned char flag_c = 0;
	hash_node_t *new_node;

	if (ht == NULL)
		return;

	printf("{");
	for (m = 0; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			if (flag_c == 1)
				printf(", ");

			new_node = ht->array[m];
			while (new_node != NULL)
			{
				printf("'%s': '%s'", new_node->key, new_node->value);
				new_node = new_node->next;
				if (new_node != NULL)
					printf(", ");
			}
			flag_c = 1;
		}
	}
	printf("}\n");
}
