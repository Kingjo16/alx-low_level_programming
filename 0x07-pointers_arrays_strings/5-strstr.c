#include "main.h"
#include <stdio.h>

/**
 * *_strstr - This locates a substring
 * @haystack: the string to be searched
 * @needle: it a substring to be find
 * Return: this will return to the pointer to the beginning or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int k, l;

	for (k = 0; haystack[k] != '\0'; k++)
	{
		for (l = 0; needle[l] != '\0'; l++)
		{
			if (haystack[k + l] != needle[l])
				break;
		}
		if (!needle[l])
			return (&haystack[k]);
	}
	return (NULL);
}
