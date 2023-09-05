#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - Made /concentes two strings
 * @s1: string one
 * @s2: string two
 * Return: new string created-Success & NULL-Error
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int l = 0, k = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	l = 0;
	k = 0;

	if (s1)
	{
		while (l < len1)
		{
			s3[l] = s1[l];
			l++;
		}
	}

	if (s2)
	{
		while (l < (len1 + len2))
		{
			s3[l] = s2[k];
			l++;
			k++;
		}
	}
	s3[l] = '\0';

	return (s3);
}
