#include "main.h"

/**
 * *_memcpy - memory area will be copied by this command
 * @dest: destinatiom
 * @src: where the memory are copy from
 * @n: number of bytes
 * Return: pointer to dest return
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}

