#include "main.h"

/**
 * clear_bit - clear the bit of a value to 0 at a index which is given
 * @n: the value which is set
 * @index: given index which is the value atrtinf at 0 to a bit to set
 * Return: 1 if it works amd -1 on error occurance.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
