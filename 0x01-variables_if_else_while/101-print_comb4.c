#include <stdio.h>

/**
 * main - Different combinations of three digits will be printed
 * Return: 0 is success
 */
int main(void)
{
	int k, b, l;

	for (k = 48; k < 58; k++)
	{
		for (b = 49; b < 58; b++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > b && b > k)
				{
					putchar(k);
					putchar(b);
					putchar(l);
					if (k != 55 || b != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
