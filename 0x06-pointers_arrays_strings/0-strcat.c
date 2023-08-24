#include "main.h"

/**
 * _strcat - this connects two dtrings
 * @dest: apended string
 * @src: add
 * Return: th result string will apper her
 */
char *_strcat(char *dest, char *src)
{
	int z, y;

	z = 0;
	y = 0;

	while (dest[z] != '\0')
		z++;

	while (src[y] != '\0')
	{
		dest[z] = src[y];
		y++;
		z++;
	}

	dest[z] = '\0';

	return (dest);
}
