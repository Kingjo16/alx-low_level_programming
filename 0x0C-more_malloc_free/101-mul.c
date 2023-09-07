#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks fora non digit char
 * @s: to be Evaluated string
 * Return: 0 for non-digit and 1 otherwise
 */
int is_digit(char *s)
{
	int k = 0;

	while (s[k])
	{
	if (s[k] < '0' || s[k] > '9')
			return (0);
		k++;
	}
	return (1);
}

/**
 * _strlen - the length of a string
 * @s: to be Evaluated string
 * Return: Returns the length of the string
 */
int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

/**
 * errors - when error for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Product of two posetive line
 * @argc: Number of argument
 * @argv: Array of arguments
 * Return: 0 for Success
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, k, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (k = 0; k <= len1 + len2; k++)
		result[k] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (k = 0; k < len - 1; k++)
	{
		if (result[k])
			a = 1;
		if (a)
			_putchar(result[k] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
