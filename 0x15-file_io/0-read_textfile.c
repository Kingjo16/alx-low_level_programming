#include "kinglib.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and that prints all the posix std.
 * @filename: the file which will be read.
 * @letters: the number whicd is read and print and return.
 * Return: The write function on success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fop, frd, fwr;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	fop = open(filename, O_RDONLY);
	frd = read(fop, buf, letters);
	fwr = write(STDOUT_FILENO, buf, frd);

	if (fop == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fop);

	return (fwr);
}
