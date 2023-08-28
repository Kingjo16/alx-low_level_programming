#include "main.h"
#include <stdio.h>

/**
 * *_strchr - this one locates a character in the string
 * @s: string
 * @c: the chart
 * Return: to the pointer
 */
char *_strchr(char *s, char c)
{
		int k;

		while (1)
		{
			k = *s++;
			if (k == c)
			{
				return (s - 1);
			}
			if (k == 0)
			{
				return (NULL);
			}
		}
}
