#include "hash_tables.h"

/**
 * hash_table_set - Change Add or update element in the table
 * @ht: A pointr
 * @key: The key to add thelement cant be empty
 * @value: Value associated in the key
 * Return: Failur would be 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *copied;
	unsigned long int changer, m;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copied = strdup(value);
	if (copied == NULL)
		return (0);

	changer = key_index((const unsigned char *)key, ht->size);
	for (m = changer; ht->array[m]; m++)
	{
		if (strcmp(ht->array[m]->key, key) == 0)
		{
			free(ht->array[m]->value);
			ht->array[m]->value = copied;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(copied);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = copied;
	new_node->next = ht->array[changer];
	ht->array[changer] = new_node;

	return (1);
}
