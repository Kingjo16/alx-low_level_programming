#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int outcome;
	int m;

	if (!b)
		return (0);

	for (m = 0; b[m] != '\0'; m++)
	{
		if (b[m] != '0' && b[m] != '1')
		{
			return (0);
		}

		outcome = (outcome << 1) | (b[m] - '0');
	}

	return (outcome);
}


