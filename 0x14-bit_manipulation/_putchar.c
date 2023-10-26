#include <unistd.h>
/**
 * _putchar - writ a character to a standard out put
 * @c: the char to be changed
 *
 * Return: succesful out put.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
