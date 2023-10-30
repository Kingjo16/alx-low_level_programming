#include "kinglib.h"

char *buffer_creator(char *list)
{
	char *buf;

	buf = malloc(sizeof(char)* 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", list);
		exit(99);
	}

	return (buf);
}

void description_fileclose(int file_dis)
{
	int hm;

	hm = close(file_dis);
	if (hm == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_dis);
		exit(100);
	}
}

int main(int argu, char *aray[])
{
	int list, fto, fre, fwr;
	char *buf;

	if (argu != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = buffer_creator(aray[2]);
	list = open(aray[1], O_RDONLY);
	fre = read(list, buf, 1024);
	fto = open(aray[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (list == -1 || fre == -1)
		{

			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", aray[1]);
			free(buf);
			exit(98);
		}

		fwr = write(fto, buf, fre);
		if (fto == -1 || fwr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", aray[2]);
			free(buf);
			exit(99);
		}

		fre = read(list, buf, 1024);
		fto = open(aray[2], O_WRONLY | O_APPEND);

	} while (fre > 0);

	free(buf);
	description_fileclose(list);
	description_fileclose(fto);

	return (0);
}
