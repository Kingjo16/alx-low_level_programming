#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Palindrome checker
 * @s: reverse string
 * Return: 1 or 0 if it is or not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Gives the length of a string
 * @s: Calculates the length which is a string
 * Return: gives the length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Characters recursively for palindrome
 * @s: A string which checks
 * @i: The iterator
 * @len: Length
 * Return: 1 or 0 if it is a palindrome or not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
