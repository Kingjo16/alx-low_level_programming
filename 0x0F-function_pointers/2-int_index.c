#include "function_pointers.h"

/**
 * int_index - int index
 * @array: array to search
 * @size: Array Size
 * @cmp: Comparing Function
 * Return: Return index 0 or -1 if no match is found or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
				return (j);
		}
	}

	return (-1);
