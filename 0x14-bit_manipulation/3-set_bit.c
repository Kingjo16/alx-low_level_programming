#include "main.h"
/**
 * set_bit - A function the gives a Value of bit to 1 at a given index
 * which is less than 64 bit size
 * @index: given index to give value of 1 too
 * @n: the int which is given
 * Return: 1 if i eorks and -1 if it doesnt and greater that\n 64
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n |= (1 << index);
		return (1);
}
