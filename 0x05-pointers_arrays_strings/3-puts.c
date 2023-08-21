#include "main.h"

/**
 * _puts - it prints a string inside the stdout
 * @str: it points(pointer) to which string to print
 */
void _puts(char *str)
{
		int k;

		for (k = 0; str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
		_putchar('\n');
}
