#include "main.h"

/**
 * rot13 - this represents the encoder
 * @s: to be encoded
 * Return: the result in string
 */
char *rot13(char *s)
{
	int z, y;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (z = 0; s[z] != '\0'; z++)
	{
		for (y = 0; a[y] != '\0'; y++)
		{
			if (s[z] == a[y])
			{
				s[z] = b[y];
				break;
			}
		}
	}

	return (s);
}
