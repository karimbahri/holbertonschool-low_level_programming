#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - display the result of addition of argv
 * @argc: size of argv
 * @argv: array containing the program command line arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1;

	while (i < argc)
	{
		if (is_integer(argv[i]))
			sum += atoi(argv[i]);

		else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * is_integer - check if a string could be converted to integer
 * @str: string to check
 * Return: 1 if true 0 otherwise
 */
int is_integer(const char *str)
{
	int i = 0;

	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);

		i++;
	}

	return (1);
}
