#include <stdio.h>
#include <stdlib.h>

/**
 * main - Own opcodes printer
 * @argc: Arguments
 * @argv: Array of arguments
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int bytes, j;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (j = 0; j < bytes; j++)
	{
		if (j == bytes - 1)
		{
			printf("%02hhx\n", arr[j]);
			break;
		}
		printf("%02hhx ", arr[j]);
	}
	return (0);
}
