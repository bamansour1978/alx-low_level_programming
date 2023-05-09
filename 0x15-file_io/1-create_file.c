#include "main.h"

/**
 * create_file - a function that creates a file.
 *
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, lenth = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	for (lenth = 0; text_content && text_content[lenth]; lenth++)
		;
	write(fd, text_content, lenth);
	close(fd);
	return (1);
}
