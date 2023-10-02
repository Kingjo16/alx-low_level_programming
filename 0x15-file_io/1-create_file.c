#include "main.h"
/**
 * create_file - Functio which Creats a file.
 * @filename: The Name of the file to be created
 * @text_content: Terminated string to write the file on
 * Return: file name is null, text content is Null(-1)
 * open file is Null (-1)
 * returns success (1) when it write and created
 */

int create_file(const char *filename, char *text_content)
{

	int OpenN, len;

	if (!filename)
		return (-1);

	OpenN = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (OpenN == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	len = strlen(text_content);
	if (write(OpenN, text_content, len) != len)
	return (-1);

	close(OpenN);

	return (1);

}
