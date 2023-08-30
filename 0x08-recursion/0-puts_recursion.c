#include "main.h"

/**
 * _puts_recursion - this will print a string
 * @s: print a string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
