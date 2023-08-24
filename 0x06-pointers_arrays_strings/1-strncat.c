#include "main.h"

/**
 * _strncat - it conects th n bytes from a given string to another
 * @dest: the detination string
 * @src: the source stringgd
 * @n: the number of bytes
 * Return: return to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int b, m;

	b = 0;
	m = 0;

	while (dest[b] != '\0')
		b++;

	while (src[m] != '\0' && m < n)
	{
		dest[b] = src[m];
		b++;
		m++;
	}

	dest[b] = '\0';

	return (dest);
}
