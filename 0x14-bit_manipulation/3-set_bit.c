#include "main.h"
/**
 * set_bit - This function set the value of a bit to 1 at a given ind
 * @n: the number to be set to the given index
 * @index: this is the the starting to the bit to be changed
 * Return: 1 on success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
