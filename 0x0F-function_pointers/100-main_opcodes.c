#include <stdio.h>
#include <stdlib.h>

#define EXIT_WITH_ERROR(X) { printf("Error\n");\
							exit(X); }

/**
 * main - main functon
 * @argc: size of argv
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int size = 0, i = 0;

	if (argc != 2)
		EXIT_WITH_ERROR(1);

	size = atoi(argv[1]);

	if (size < 0)
		EXIT_WITH_ERROR(2);

	while (i < size)
	{
		printf("%x", i);
		i++;
	}
	printf("\n");
}
