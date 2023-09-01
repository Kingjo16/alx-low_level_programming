#include <stdio.h>
#include "main.h"

/**
 * main - Number of arguments passed to the program
 * @argc: Arguments count
 * @argv: Array of arguments
 * Return: Gives 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
