#include "main.h"
/**
 * set_bit - This function set the value of a bit to 1 at a given ind
 * @n: the number to be set to the given index
 * @index: this is the the starting to the bit to be changed
 * Return: 1 on success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > 64)
		return (-1);

	for (m = 1; index > 0; index--, m *= 2)
		*n += m;
	return (1);
}
