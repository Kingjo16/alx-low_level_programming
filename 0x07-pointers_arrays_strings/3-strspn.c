#include "main.h"

/**
 * *_strspn - length of the prefix
 * @s: evluate string
 * @accept: accepted string
 * Return: The initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int k, l, m, flag;

	m = 0;
	for (k = 0; s[k] != '\0'; k++)
	{
		flag = 0;
		for (l = 0; accept[l] != '\0'; l++)
		{
			if (s[k] == accept[l])
			{
				m++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (m);
		}
	}

	return (0);
}
