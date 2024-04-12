#include "search_algos.h"

/**
 * interpolation_search - Value will be searched in a sorted array
 * @array: Pointer to the first element of the input array
 * @size: This is the size odf the array to search in
 * @value: value to search for in the array
 * Return: NULL, -1 and index
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t m, k, p;

	if (array == NULL)
		return (-1);

	for (k = 0, p = size - 1; p >= k;)
	{
		m = k + (((double)(p - k) / (array[p] - array[k])) * (value - array[k]));
		if (m < size)
			printf("Value checked array[%ld] = [%d]\n", m, array[m]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", m);
			break;
		}

		if (array[m] == value)
			return (m);
		if (array[m] > value)
			p = m - 1;
		else
			k = m + 1;
	}
	return (-1);
}
