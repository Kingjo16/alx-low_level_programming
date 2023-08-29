#include <stdio.h>

/**
 * main - Different combinations of two digits will be printed
 * Return: 0 on succesful return
 */
int main(void)
{
	int k, m;

	for (k = 48; k <= 56; k++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > k)
			{
				putchar(k);
				putchar(m);
				if (k != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
