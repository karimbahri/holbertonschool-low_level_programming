#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "holberton.h"


/**
 * read_textfile - read the content of file
 * @filename: path of the file
 * @letters: number of the readed characters
 * Return: number of readed character if it works or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd, nbRd;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(letters);

	read(fd, buffer, letters - 1);

	buffer[letters - 1] = '\0';

	nbRd = write(STDOUT_FILENO, buffer, letters);

	if (nbRd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (nbRd);
}
