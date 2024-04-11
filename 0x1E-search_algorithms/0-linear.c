#include "search_algos.h"

/**
 * linear_search - liner search which searches for a value in an array of int
 * @array: FIrst elemnt in the array to SEARch.
 * @size: elemnts in the array.
 * @value: This is the value to search.
 * Return: If the value is not present or the array is NULL, -1.
 */

int linear_search(int *array, size_t size, int value)
{
	int ind;

	if (array == NULL)
		return (-1);

	for (ind = 0; ind < (int)size; ind++)
	{
		printf("Value checked array[%u] = [%d]\n", ind, array[ind]);
		if (array[ind] == value)
			return (ind);
	}

	return (-1);
}
