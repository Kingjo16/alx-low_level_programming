#include "main.h"
/**
 * get_endianness - this fuction checks the ENDIANNESS.
 * Return: 1 in succes of little endian
 * and 0 on a big endian
 */

int get_endianness(void)
{
	int Given_num;

	Given_num = 1;
	if (*(char *)&Given_num == 1)
		return (1);
	else
		return (0);
}
