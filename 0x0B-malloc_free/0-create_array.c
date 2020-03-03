#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - create dynamic array
 * @size: size of the array
 * @c: character to fill
 * Return: pointer to the array created or NULL if failed
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	_memset(array, c, size);

	return (array);
}


/**
 * _memset - fills the memory with constant byte character
 * @s: string
 * @b: the character
 * @n: number of the characters
 * Return: string modified
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0 ; i < n ; i++)
		s[i] = b;

	return (s);
}
