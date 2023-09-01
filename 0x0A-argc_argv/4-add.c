#include <stdio.h>
#include "main.h"

/**
 * _atoi - This will convert string to an integer
 * @s: String
 * Return: gives int converted from the string
 */
int _atoi(char *s)
{
	int k, d, n, len, y, digit;

	k = 0;
	d = 0;
	n = 0;
	len = 0;
	y = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (k < len && y == 0)
	{
		if (s[k] == '-')
			++d;

		if (s[k] >= '0' && s[k] <= '9')
		{
			digit = s[k] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			y = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			y = 0;
		}
		k++;
	}

	if (y == 0)
		return (0);

	return (n);
}

/**
 * main - it Adds two positive number
 * @argc: Number of arguments
 * @argv: Array of arguents
 * Return: 0 -Success, or 1 failur
 */
int main(int argc, char *argv[])
{
	int sum, num, i, j, z;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (z = 1; z < argc; z++)
	{
		num = _atoi(argv[z]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
