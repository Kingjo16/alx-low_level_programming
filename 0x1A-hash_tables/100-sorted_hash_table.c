#include "hash_tables.h"

/**
 * shash_table_create - It makes a sorted table
 * @size: Size of the array
 * Return: Go back to the newly created sorted Table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int m;
	shash_table_t *sorted_ht;

	sorted_ht = malloc(sizeof(shash_table_t));
	if (sorted_ht == NULL)
		return (NULL);

	sorted_ht->array = malloc(sizeof(shash_node_t *) * size);
	if (sorted_ht->array == NULL)
	{
		free(sorted_ht);
		return (NULL);
	}

	for (m = 0; m < size; m++)
		sorted_ht->array[m] = NULL;

	sorted_ht->shead = NULL;
	sorted_ht->stail = NULL;

	sorted_ht->size = size;

	return (sorted_ht);
}

/**
 * shash_table_set - This will add an elem in the sorted table
 * @ht: the sorted Table 
 * @key: string (key)
 * @value: string val
 * Return: success for 1 and 0 for failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *new_elem, *cur, *prev_elem;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	cur = ht->array[idx];
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
		{
			free(cur->value);
			cur->value = strdup(value);
			if (cur->value == NULL)
				return (0);
			return (1);
		}
		cur = cur->next;
	}
	new_elem = malloc(sizeof(shash_node_t));
	if (new_elem == NULL)
		return (0);
	new_elem->key = strdup(key);
	new_elem->value = strdup(value);
	if (new_elem->key == NULL || new_elem->value == NULL)
	{
		free(new_elem->key);
		free(new_elem->value);
		free(new_elem);
		return (0);
	}
	cur = ht->shead;
	prev_elem = NULL;
	while (cur != NULL && strcmp(cur->key, key) < 0)
	{
		prev_elem = cur;
		cur = cur->snext;
	}
	new_elem->next = ht->array[idx];
	ht->array[idx] = new_elem;
	new_elem->snext = cur;
	new_elem->sprev = prev_elem;
	if (prev_elem != NULL)
		prev_elem->snext = new_elem;
	else
		ht->shead = new_elem;
	if (cur != NULL)
		cur->sprev = new_elem;
	else
		ht->stail = new_elem;
	return (1);
}
/**
 * shash_table_get - This will bring back a value in the key which is sorted
 * @ht: The table which is sorted
 * @key: String Kwy
 * Return: will give back the the sorted value.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *cur_elem;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	cur_elem = ht->array[idx];
	while (cur_elem != NULL)
	{
		if (strcmp(cur_elem->key, key) == 0)
			return (cur_elem->value);
		cur_elem = cur_elem->next;
	}
	return (NULL);
}
/**
 * shash_table_print - this willprint the sorted table with the new val.
 * @ht: sorted table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *cur_elem;

	if (ht == NULL)
		return;
	cur_elem = ht->shead;
	printf("{");
	while (cur_elem != NULL)
	{
		printf("'%s': '%s'", cur_elem->key, cur_elem->value);
		if (cur_elem->snext != NULL)
			printf(", ");
		cur_elem = cur_elem->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - This will print the table in rev order.
 * @ht: Pointer to the Table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *cur_elem;

	if (ht == NULL)
		return;

	cur_elem = ht->stail;

	printf("{");
	while (cur_elem != NULL)
	{
		printf("'%s': '%s'", cur_elem->key, cur_elem->value);
		if (cur_elem->sprev != NULL)
			printf(", ");
		cur_elem = cur_elem->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - This will delate the hole table
 * @ht: The sorted table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int m;
	shash_node_t *cur_elem, *temp_elem;

	if (ht == NULL)
		return;

	for (m = 0; m < ht->size; m++)
	{
		cur_elem = ht->array[m];
		while (cur_elem != NULL)
		{
			temp_elem = cur_elem;
			cur_elem = cur_elem->next;
			free(temp_elem->key);
			free(temp_elem->value);
			free(temp_elem);
		}
	}
	free(ht->array);
	free(ht);
}
