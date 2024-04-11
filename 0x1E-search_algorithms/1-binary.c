#include "search_algos.h"

/**
 * binary_search - This will search a value from sorted array
 * @array: First element pointer
 * @size: The size and element of the array
 * @value: Value to be searched.
 * Return: Null and -1 if presented and not presented.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t ind, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (ind = l; ind < r; ind++)
			printf("%d, ", array[ind]);
		printf("%d\n", array[ind]);

		ind = l + (r - l) / 2;
		if (array[ind] == value)
			return (ind);
		if (array[ind] > value)
			r = ind - 1;
		else
			l = ind + 1;
	}

	return (-1);
}
