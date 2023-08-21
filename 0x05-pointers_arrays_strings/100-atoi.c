#include "main.h"

/**
 * _atoi - it converts a string
 * @s: showes te string to be cov]nverted
 * Return: shows int will be converted from the string
 */
	int _atoi(char *s)
{
	int a, d, c, len, g, digit;

	a = 0;
	d = 0;
	c = 0;
	len = 0;
	g = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && g == 0)
	{
		if (s[a] == '-')
			++d;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (d % 2)
				digit = -digit;
			c = c * 10 + digit;
			g = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			g = 0;
		}
		a++;
	}

	if (g == 0)
		return (0);

	return (c);
}
