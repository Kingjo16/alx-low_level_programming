#include "main.h"
/**
 * flip_bits - a function that gives a number by fliping another number
 * @n: the number to be fliped
 * @m: another number to flip
 * Return: the changed number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int gap;
	int change = 0;

	gap = n ^ m;

	while (gap)
	{
		change++;
		gap &= (gap - 1);
	}

	return (change);
}
