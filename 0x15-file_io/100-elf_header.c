#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/**
 * main - main function
 * @argc: size of argc
 * @argv: array of integer
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int fd;

	if (argc != 3)
	{
		dprintf(2, "usage elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "couldn't open file\n");
		exit(98);
	}

	close(fd);
	return (EXIT_SUCCESS);
}
