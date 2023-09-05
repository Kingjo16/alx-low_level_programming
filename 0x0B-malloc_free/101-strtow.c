#include <stdlib.h>
#include "main.h"

/**
 * count_word - This Counts the number of words in a string
 * @s: string to be evaluated
 * Return: will return to Number of words
 */
int count_word(char *s)
{
	int flag, x, z;

	flag = 0;
	z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			z++;
		}
	}

	return (z);
}
/**
 * **strtow - this split a string into words
 * @str: string to be spilited
 * Return: pointer to an array of strings for Success & Null error
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int l, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (l = 0; l <= len; l++)
	{
		if (str[l] == ' ' || str[l] == '\0')
		{
			if (c)
			{
				end = l;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = l;
	}

	matrix[k] = NULL;

	return (matrix);
}
