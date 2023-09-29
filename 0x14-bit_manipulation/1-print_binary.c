#include "main.h"
/**
 * print_binary - This is a function which prints
 * a Binary representaion of  agiven number in the form of char.
 * @n: A given pointer to the number that will be chaged to binary
 */

void print_binary(unsigned long int n)
{

	if (n >> 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
