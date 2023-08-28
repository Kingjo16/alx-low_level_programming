#include "main.h"

/**
 * _memset - Fills the first n bytes of memory area pointed
 * _memset: discription
 * @s: the memory
 * @b: char
 * @n: copy b
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}

