#include "kinglib.h"
/**
 * create_file - this creats a file which points to a specific line
 * @filename: the name of the file which will be created.
 * @text_content: the content of the file which is selected from
 * Return: 1 on success and -1 if the filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fop, fwr;
	int nletter = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (nletter = 0; text_content[nletter];)
			nletter++;
	}

	fop = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fwr = write(fop, text_content, nletter);

	if (fop == -1 || fwr == -1)
		return (-1);

	close(fop);

	return (1);
}
