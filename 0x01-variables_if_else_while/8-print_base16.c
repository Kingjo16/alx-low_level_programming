#include <stdio.h>

/**
 * main - Nmbers of base 16 in lowercas
 * Return: 0 on success return
 */
int main(void)
{
	int z;
	char ch;

	for (z = 48; z < 58; z++)
	{
		putchar(z);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
