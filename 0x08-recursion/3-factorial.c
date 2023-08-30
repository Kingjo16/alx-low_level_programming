#include "main.h"

/**
 * factorial - this gives the factorial of a number
 * @n: return number
 * Return: A factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
