#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output.
 *
 * @filename: const char pointer
 * @letters: input the number of letters it should read and print
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *reader;
	int fd;
	ssize_t Num_Bt, i;


	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0777);
	if (fd == -1)
		return (0);

	reader = malloc(letters * sizeof(char));
	if (reader == NULL)
		return (0);

	Num_Bt = read(fd, reader, letters);
	if (Num_Bt == -1)
	{
		free(reader);
		return (0);
	}

	i = 0;
	while (i < Num_Bt)
	{
		write(STDOUT_FILENO, &reader[i], 1);
		i++;
	}
	if (close(fd) == -1)
		return (0);

	free(reader);
	return (Num_Bt);
}
