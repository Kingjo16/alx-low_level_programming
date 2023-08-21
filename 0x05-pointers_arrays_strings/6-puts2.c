#include "main.h"

/**
 * puts2 - this will print one char choosin form two strings then a new line
 * @str: chars will be printed by this string command
 */
	void puts2(char *str)
{
	int ben, l;
	
	ben = 0;

	while (str[ben] != '\0')
	{
		ben++;
	}

	for (l = 0; l < ben; l += 2)
	{
		_putchar(str[l]);
	}

	_putchar('\n');
}
