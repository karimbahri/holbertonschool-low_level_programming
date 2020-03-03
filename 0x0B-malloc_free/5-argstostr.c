#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concat all av elements
 * @ac: size of av
 * @av: array
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	char *string = NULL;
	int length = 0, i = 0, j = 0, k = 0;

	if (!ac || !av)
		return (NULL);

	length = get_length(av, ac);

	string = malloc(length * sizeof(char) + 1);

	if (!string)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
		{
			string[k] = av[i][j];
			k++;
		}
		string[k] = '\n';
		k++;
	}
	string[k] = '\0';

	return (string);
}

/**
 * get_length - get the length of 2d array
 * @av: 2D array
 * @ac: size
 * Return: the length of 2D array
 */
int get_length(char **av, int ac)
{
	int length = 0, i = 0, j = 0;

	for (i = 0 ; i < ac ; i++)
	{
		j = 0;
		while (av[i][j])
			length++, j++;

		length++;
	}
	return (length);
}
