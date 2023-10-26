#include "main.h"

/**
 * print_binary - this fun. prints a binary representation of a num.
 * @n: The given number which will be printed to binary.
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int change;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (num = n, change = 0; (num >>= 1) > 0; change++)
		;

		for (; change >= 0; change--)
		{
			if ((n >> change) & 1)
				_putchar('1');
			else
				_putchar('0');
		}
}
