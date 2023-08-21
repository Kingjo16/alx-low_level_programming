#include "main.h"

/**
 * *_strcpy - this copies src string
 * @dest: this is a pointer to the buffer in which the copy string is
 * @src: this will string  
 * Return: the pointer will be back to the dest
 */
		char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
