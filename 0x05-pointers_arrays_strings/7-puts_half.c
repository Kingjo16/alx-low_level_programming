#include "main.h"

/**
 * puts_half - this will print half of the string and a new line
 * @str: implies the string to be printed
 */
		void puts_half(char *str)
{
	int zen, l, i;
	zen = 0;

	while (str[zen] != '\0')
	{
		zen++;
	}

	if (zen % 2 == 0)
	{
		for (i = zen / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (zen % 2)
	{
		for (l = (zen - 1) / 2; l < zen - 1; l++)
		{
			_putchar(str[l + 1]);
		}
	}
	_putchar('\n');
}
