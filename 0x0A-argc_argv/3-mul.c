#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - display the result of argv[1] * argv[2]
 * @argc: size of argv
 * @argv: array containing the program command line arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}

	printf("Error\n");
	return (1);
}
