#include "main.h"
/**
 * get_endianness - Checks for the ENDIANNESS
 * Return: 0 for big, 1 for littl
 */

int get_endianness(void)
{
	unsigned int e;

	e = 1;
	if (*(char *)&e == 1)
		return (1);
	else
		return (0);
}
