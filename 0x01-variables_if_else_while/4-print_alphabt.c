#include <stdio.h>

/**
 * main - this pritns except lowercase alphabet except q and e
 * Return: 0 on succesful return
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
