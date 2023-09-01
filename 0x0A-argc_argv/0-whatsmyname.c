#include <stdio.h>
#include "main.h"

/**
 * main - Prints Name
 * @argc: Number of argument
 * @argv: Array of argument
 * Return: Gives 0 on Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
