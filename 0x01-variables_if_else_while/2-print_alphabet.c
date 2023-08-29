#include <stdio.h>

/**
 * main - this prints the alphabet in lower case
 * Return: 0 witchis success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
