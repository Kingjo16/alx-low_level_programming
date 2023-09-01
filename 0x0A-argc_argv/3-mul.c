#include <stdio.h>
#include "main.h"

/**
 * _atoi - This will convert string to integer
 * @s: String
 * Return: gives int which is converted from the string
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
 * main - This will multiplie two numbers
 * @argc: Number of arguments
 * @argv: array in the arguments
 * Return: 0 for Success, 1 for Error
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
