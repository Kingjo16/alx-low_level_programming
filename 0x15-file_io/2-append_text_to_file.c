#include "kinglib.h"

/**
 * append_text_to_file - this is a function that end ofa  file and prints.
 * @filename: the file name which will be ended.
 * @text_content: the contenet of the text which the ender ends.
 * Return: 1 on success and fop for open file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fop, fwr;
	int nlet = 0;

	if (!filename)
		return (-1);

	fop = open(filename, O_WRONLY | O_APPEND);

	if (fop == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (nlet = 0; text_content[nlet]; nlet++)
			;
		 fwr = write(fop, text_content, nlet);

		if (fwr == -1)
			return (-1);
	}


	close(fop);

	return (1);
}
