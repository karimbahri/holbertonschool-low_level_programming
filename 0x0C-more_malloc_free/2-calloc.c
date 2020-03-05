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

	return (dynamic_array);
}
