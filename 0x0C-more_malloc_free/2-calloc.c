#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - reserve nmemb bytes of memory
 * @nmemb: number of bytes
 * @size: size of each element
 * Return: dynamic array or NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *dynamic_array;

	if (!nmemb || !size)
		return (NULL);

	dynamic_array = malloc(nmemb * size);

	if (!dynamic_array)
		return (NULL);

	_memset(dynamic_array, 0, nmemb * size);

	return (dynamic_array);
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
