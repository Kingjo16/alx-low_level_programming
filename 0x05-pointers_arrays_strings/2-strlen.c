#include "main.h"

/**
 * _sterlen - this calculates the length 
 * @s: it points to the input string
 * Return: determines the lenght of the string
 */

int _strlen(char *s)
{
	int l;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

return l;
}
