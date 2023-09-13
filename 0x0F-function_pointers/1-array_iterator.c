#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - When a function is given as a parameter this will exe.
 * @array: Array
 * @size: Size of the array
 * @action: Function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (!array || !action)
		return;
	for (j = 0; j < size; j++)
		action(array[j]);
}
