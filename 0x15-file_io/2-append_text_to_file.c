#include "main.h"

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
