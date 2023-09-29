#include "main.h"
/**
 * clear_bit - This function set the value of a given index bit to 0
 * @index: the given index which will be maipulated
 * @n: the value ehich is give
 * Return: when it workes and when the size is less than 64 prints 1
 * -1 for an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
