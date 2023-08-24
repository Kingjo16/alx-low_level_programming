#include "main.h"

/**
 * _strncpy - it copies a string cpy standes for copy
 * @dest: the string destination
 * @src: the source of the string
 * @n: this is a function which is the number of bytes to be copied
 * Return: result string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;

	while (src[b] != '\0' && b < n)
	{
		dest[b] = src[b];
		b++;
	}

	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
