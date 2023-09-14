#include "variadic_functions.h"

/**
 * sum_them_all - Calculates the sum
 * @n; Number of Arguments which are passed to the function
 * Return: The sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (j = 0; j < n; j++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}

