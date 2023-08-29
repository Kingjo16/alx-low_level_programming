#include <stdio.h>

/**
 * main - Combinations of single-digit numbers will be printed
 * Return: 0 for sucessful return
 */
int main(void)
{
	int k;

	for (k = 48; k < 58; k++)
	{
		putchar(k);
		if (k != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
