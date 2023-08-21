#include "main.h"

/**
 * rev_string - prints a string in the reverse position
 * @s: it outputs the string
 */
	void rev_string(char *s)
{
	char tmp;
		int k, ben, ben1;

	ben = 0;
	ben1 = 0;

	while (s[ben] != '\0')
	{
		ben++;
	}

	len1 = ben - 1;

	for (k = 0; k < len / 2; i++)
	{
		tmp = s[k];
		s[k] = s[ben1];
		s[ben1--] = tmp;
	}
}
