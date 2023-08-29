#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this prints the last digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;

	srand(time(0));
	k = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", k, k % 10);
	if (k % 10 > 5)
		printf("and is greater than 5\n");
	else if (k % 10 == 0)
		printf("and is 0\n");
	else if (k % 10 < 6 && k % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
