#include "holberton.h"
#include <stdio.h>

/**
 * main - print the number of the command line arguments
 * @argc: size of argv
 * @argv: array containing the program command line arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
