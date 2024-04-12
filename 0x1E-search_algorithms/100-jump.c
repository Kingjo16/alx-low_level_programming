#include "search_algos.h"

/**
 *  jump_search - Value will be searched in an array which is sorted
 *  @array: To the first elemnt of the input array to search
 *  @size: The number of elemntes(size) of the array
 *  @value: value to search for
 *  Return: The first index of the number
 */

int jump_search(int *array, size_t size, int value)
{
	int i, ju, k, st;

	if (array == NULL || size == 0)
		return (-1);
	ju = (int)sqrt((double)size);
	k = 0;
	st = i = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);

		k++;
		st = i;
		i = k * ju;
	} while (i < (int)size && array[i] < value);

	printf("Value found between indexes [%d] and [%d]\n", st, i);

	for (; st <= i && st < (int)size; st++)
	{
		printf("Value checked array[%d] = [%d]\n", st, array[st]);
		if (array[st] == value)
			return (st);
	}

	return (-1);
}
