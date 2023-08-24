#include "main.h"

/**
 * leet - It encodes
 * @s: to be encoded
 * Return: the result
 */
char *leet(char *s)
{
	int l, k;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (l = 0; s[l] != '\0'; l++)
	{
		for (k = 0; k < 10; k++)
		{
			if (s[l] == a[k])
			{
				s[l] = b[k];
			}
		}
	}

	return (s);
}
