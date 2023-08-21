#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that gives randome password for 101crackme
 * Return: which eill give always success
 */
	int main(void)
{
		int pass[100];
		int k, sum, y;

	sum = 0;	

	srand(time(NULL));

	for (k = 0; k < 100; k++)
	{
		pass[k] = rand() % 78;
		sum += (pass[k] + '0');
		putchar(pass[k] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			y = 2772 - sum - '0';
			sum += y;
			putchar(y + '0');
			break;
		}
	}

	return (0);
}
