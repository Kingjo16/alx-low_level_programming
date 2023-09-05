#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - this copy the string
 * @str: String to Duplicate
 * Return: Copied string -Success & NULL- Error
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int l, len;

	l = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[l] = str[l]) != '\0')
		l++;

	return (dup);
}
