#include "main.h"

/**
 * string_toupper - it changes all the lowercase letters to upper
 * @s: modified string
 * Return: result
 */
char *string_toupper(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
			s[j] = s[j] - 32;
	}

	return (s);
}
