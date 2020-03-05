#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - display the result of argv[1] multiplied with argv[2]
 * @argc: size of argv
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", atoi(argv[1]));
	return (0);
}
