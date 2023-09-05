#include <stdlib.h>
#include "main.h"

/**
 * *create_array - an array of characters and initializes
 * @size: Gives the size of the array
 * @c: character to initialize the array c
 * Return: Array pointer Success & NULL-Error
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int l = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (l < size)
	{
		*(p + l) = c;
		l++;
	}

	*(p + l) = '\0';

	return (p);
}
