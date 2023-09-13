#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints Name
 * @name: the Name to be printed
 * @f: Pointer to the function which will be printed
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);

}
