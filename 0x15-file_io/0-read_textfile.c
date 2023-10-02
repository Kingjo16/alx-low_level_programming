#include "main.h"

/**
 * read_textfile - A function that Reads a Text file and prints
 * it to the POSIX standard output.
 * @letters: Number of printed and REadable letters
 * @filename: The File which will be reas and printed in this case
 * which is Requiescat
 * Return: Return Null if theere is no file to read
 * if the write fails and returns fails it gives 0
 * it returns the actua, number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, ReadN, WriteN;
	char *Buf;

	if (filename == NULL)
		return (0);
	Buf = malloc(sizeof(char) * letters);
	if (Buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	ReadN = read(fd, Buf, letters);
	WriteN = write(STDOUT_FILENO, Buf, ReadN);

	if (fd == -1)
	{
		return (0);
	}
	free(Buf);
	close(0);
	return (WriteN);
}
