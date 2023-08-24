#include "main.h"

/**
 * cap_string - it capitalize
 * @s: it modify
 * Return: the result
 */
char *cap_string(char *s)
{
	int w, e;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (w = 0; s[w] != '\0'; w++)
	{
		if (w == 0 && s[w] >= 'a' && s[w] <= 'z')
			s[w] -= 32;

		for (e = 0; e < 13; e++)
		{
			if (s[w] == spe[e])
			{
				if (s[w + 1] >= 'a' && s[w + 1] <= 'z')
				{
					s[w + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
