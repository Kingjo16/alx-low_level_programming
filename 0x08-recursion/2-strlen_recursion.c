#include "main.h"

/**
 * _strlen_recursion - gives the length of the string
 * @s: A string to calculate the length
 * Return: this will return the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
