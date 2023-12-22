#include "hash_tables.h"

/**
 * hash_djb2 - The djb2 algorithm will be implemented eith this fun.
 * @str: Hash string
 * Return: The outcome Hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	int c_pro;
	unsigned long int hash_sign;

	hash_sign = 5381;
	while ((c_pro = *str++))
		hash_sign = ((hash_sign << 5) + hash_sign) + c_pro;
	return (hash_sign);
}
