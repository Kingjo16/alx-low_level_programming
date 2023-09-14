#include "variadic_functions.h"

/**
 * print_strings - String Printer
 * @separator: Separateor between strings
 * @n: Number of Arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	char *str;

	va_list list;

	va_start(list, n);

	for (k = 0; k < n; k++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && k == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(list);
}
