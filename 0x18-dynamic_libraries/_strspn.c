#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		int found = 0;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				found = 1;
				count++;
				break;
			}
			accept++;
		}

		if (found == 0)
		{
			break;
		}
		s++;
		accept = accept - count;
	}

	return count;
}
