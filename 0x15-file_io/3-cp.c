#include "main.h"

#define BUFSIZE 1024

/**
 * main - Thid Copies contents Of aGiven another file
 * @argc: Number of Arguments
 * @argv: Aray OF Arguments
 *
 * Return: 0-- on a success non-zero on a failure
 */
int main(int argc, char **argv)
{
	int len;
	int OpenN, ReadN, WriteN;
	char Buf[BUFSIZE];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	len = open(argv[1], O_RDONLY);
	if (len == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	OpenN = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (OpenN == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
	}

	while ((ReadN = read(len, Buf, BUFSIZE)) > 0)
	{
	if (write(OpenN, Buf, ReadN) != ReadN)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
	}
	if (ReadN == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}

	if (close(len) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", len);
	exit(100);
	}

	if (close(OpenN) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", OpenN);
	exit(100);
	}
	return (0);
}
