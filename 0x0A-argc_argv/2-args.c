#include <stdio.h>
#include "main.h"

/**
 * main - Prints all recived arguments
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: gives 0 on Successeful return
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
