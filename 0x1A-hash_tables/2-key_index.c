#include "hash_tables.h"

/**
 * key_index - An index where the key val will be stored.
 * @key: The index which will assigne the index
 * @size: The array size
 * Return: This will return the index valstored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
