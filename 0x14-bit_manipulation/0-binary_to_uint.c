#include "main.h"

/**
 * binary_to_uint - Converts a Binary Num to an unsigned
 * int with variable Tota
 * @b: b is bointing  to a string ehich is binery with 0 & 1 char
 * Return: IF the given character is not 1 or 0 it will give Null
 * if the binery is 0 it gives 0
 * if the answer is available it gives an unsigned int wich is Total.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int Total = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		Total <<= 1;
		if (*b == '1')
			Total += 1;
		b++;
	}

	return (Total);

}
