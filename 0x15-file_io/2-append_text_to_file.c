#include "main.h"
/**
 * append_text_to_file - A function that appends a Text
 * at the end of a file.
 * @filename: The Name of the file
 * @text_content: the content of the file.
 * Return: 1 on success and -1 on failure when filename is null
 * when text content is null
 * ehn the open file is null
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int OpenN, len = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	OpenN = open(filename, O_WRONLY | O_APPEND);
	if (OpenN == -1)
		return (-1);
	len = strlen(text_content);
	if (write(OpenN, text_content, len) != len)
		return (-1);
	close(OpenN);
	return (1);
}
