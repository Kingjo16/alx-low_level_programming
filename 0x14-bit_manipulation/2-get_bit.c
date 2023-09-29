#include "main.h"
/**
 * get_bit - A function that gives the value Bit of a given index
 * @index: strtes from 0 and it is the bit we want to get
 * @n: gives the bit of the index we want
 * Return: gives -1 when the index is greater or equal to 64,
 * returns 1 bit when both n shifter to the right by index
 * and the return are both 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= 64)
	return (-1);
return ((n >> index & 1));
}
