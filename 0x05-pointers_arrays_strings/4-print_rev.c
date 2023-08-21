#include "main.h"

/**
 * print_rev - a string will be printed in a reverse after that a new line
 * @s: string to be printed
 */
	void print_rev(char *s)
{
	int z, y, len;

	z = 0;

	while (s[z] != '\0')
	{
		z++;
	}

	len = z;

	for (y = len - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}

	_putchar('\n');
}
