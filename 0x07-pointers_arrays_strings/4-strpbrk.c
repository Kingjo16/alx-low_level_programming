#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - This Searches a
 * @s: string
 * @accept: accept the string content
 * Return: NULL and char
 */
char *_strpbrk(char *s, char *accept)
{
	int k, l;

	for (k = 0; *s != '\0'; k++)
	{
		for (l = 0; accept[l] != '\0'; l++)
		{
			if (*s == accept[l])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
