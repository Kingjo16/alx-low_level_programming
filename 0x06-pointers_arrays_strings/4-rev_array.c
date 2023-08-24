#include "main.h"

/**
 * reverse_array - thia will give us reverses an array of integers
 * @a: the array which will be reversed
 * @n: the elements in the array
 */
void reverse_array(int *a, int n)
{
	int z, y, tmp;

	y = n - 1;

	for (z = 0; z < n / 2; z++)
	{
		tmp = a[z];
		a[z] = a[y];
		a[y--] = tmp;
	}
}
