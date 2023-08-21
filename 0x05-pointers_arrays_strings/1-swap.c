#include "main.h"


/**
 * swap_int - it swaps the integers the two integers values
 * @a: its just a Pointer to the first interger
 * @b: this one is a pointer to the second integer
 */ 			
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b =temp;
}
