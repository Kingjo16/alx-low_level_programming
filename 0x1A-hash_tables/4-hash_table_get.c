#include "hash_tables.h"

/**
 * hash_table_get - This will Retrive or call back a key
 * that is in the has table
 * @ht: Pointer
 * @key: Value getter key
 * Return: Null on key doesnt match
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int m;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	m = key_index((const unsigned char *)key, ht->size);
	if (m >= ht->size)
		return (NULL);

	new_node = ht->array[m];
	while (new_node && strcmp(new_node->key, key) != 0)
		new_node = new_node->next;

	return ((new_node == NULL) ? NULL : new_node->value);
}

