#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	size_t ind;

	if (array == NULL)
		return (-1);

	for (ind = 0; ind < size; ind++)
	{
		printf("Value checked array[%ld] = [%d]\n", ind, array[ind]);
		if (array[ind] == value)
			return (ind);
	}

	return (-1);
}
