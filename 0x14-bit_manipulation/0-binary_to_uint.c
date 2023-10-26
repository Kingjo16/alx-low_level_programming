#include "main.h"
/**
 * binary_to_uint - this changes a binary number into a unit number.
 * @b: the number who could be changed.
 * Return: the outcome which is the unit number will be returned.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int outcome, new;
	int m;

	if (!b)
		return (0);

	outcome = 0;

	for (m = 0; b[m]; m++)
	{

		if (b[m] != '0' && b[m] != '1')
			return (0);
	}
		for (new = 1, outcome = 0, m--; m >= 0; m--, new *= 2)
		{
			if (b[m] == '1')
				outcome += new;
		}

	return (outcome);
}
