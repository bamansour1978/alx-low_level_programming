#include "main.h"

/**
 * append_text_to_file -  a function that appends text at the end of a file.
 *
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, lenght = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	for (; text_content && text_content[lenght]; lenght++)
		;
	write(fd, text_content, lenght);
	close(fd);
	return (1);
}
