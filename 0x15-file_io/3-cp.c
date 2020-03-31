#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * exitWithError - exit and display to the standar error
 * @log: error text
 * @fileName: file name
 * @status: exit status
 */
void exitWithError(const char *log, const char *fileName, int status)
{
	if (log)
		dprintf(2, "%s ", log);

	if (fileName)
		dprintf(2, "%s", fileName);

	dprintf(2, "\n");

	exit(status);
}

/**
 * main - main function
 * @argc: size of argc
 * @argv: array of integer
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int source_file_d, destination_file_d, nb_R;

	if (argc != 3)
		exitWithError("Usage: cp file_from file_to", NULL, 97);

	source_file_d = open(argv[1], O_RDONLY);

	if (source_file_d == -1)
		exitWithError("Error: Can't read from file", argv[1], 98);

	destination_file_d = open(argv[2],
	O_WRONLY | O_TRUNC | O_CREAT,
	S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (destination_file_d == -1)
		exitWithError("Error: Can't write to", argv[2], 99);

	while ((nb_R = read(source_file_d, buffer, 1024)))
	{
		if (nb_R == -1)
			exitWithError("Error: Can't read from file", argv[1], 98);
		if (write(destination_file_d, buffer, nb_R) == -1)
			exitWithError("Error: Can't write to", argv[2], 99);
	}

	if (close(source_file_d) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", source_file_d);
		exit(100);
	}
	if (close(destination_file_d) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", destination_file_d);
		exit(100);
	}
	return (EXIT_SUCCESS);
}


