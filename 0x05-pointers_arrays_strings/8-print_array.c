#include <stdio.h>
#include "main.h"

/**
 * print_array - this prints n amount of elements of a given array of integers
 * @a: this is the array that will be printed
 * @n: counts the number of elements to be printed
 */
	void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		if (z == 0)
			printf("%d", a[z]);
		else
			printf(", %d", a[z]);
	}
		printf("\n");
}
