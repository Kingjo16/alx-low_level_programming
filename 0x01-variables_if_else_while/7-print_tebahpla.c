#include <stdio.h>

/**
 * main - Lowercase alphabet in reverse
 * Return: 0 for successful return
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
