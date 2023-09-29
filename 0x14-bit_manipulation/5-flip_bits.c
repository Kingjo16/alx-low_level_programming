#include "main.h"
/**
 * flip_bits - Gives the number of bits that is needed to be fliped
 * to get from one number to another
 * @m: an intiger which the number will be fliped too
 * @n: an integer which will be fliped
 * Return: give bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ExclusivOR;
	int Bit;

	ExclusivOR = n ^ m;
	Bit = 0;

	while (ExclusivOR > 0)
	{
		Bit += (ExclusivOR & 1);
		ExclusivOR >>= 1;
	}
	return (Bit);
}
