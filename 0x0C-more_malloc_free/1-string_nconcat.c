#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates Byets of a string
 * @s1: String to append to
 * @s2: String to concatenate from
 * @n: Number of bytes
 * Return: returnes to a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int k = 0, l = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (k < len1)
	{
		s[k] = s1[k];
		k++;
	}

	while (n < len2 && k < (len1 + n))
		s[k++] = s2[l++];

	while (n >= len2 && k < (len1 + len2))
		s[k++] = s2[l++];

	s[k] = '\0';

	return (s);
}
