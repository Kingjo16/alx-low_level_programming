#include "main.h"
/**
 * get_bit - This function get the bit of the given index that u want
 * @n: is the number which the bit will be given for
 * @index: is the starting to the bit we want
 * Return: 1 on succusee and -1 not sucesses
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
