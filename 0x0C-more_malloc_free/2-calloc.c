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
	char *ptr;
	int i = 0;

	if (!nmemb || !size)
		return (NULL);

	dynamic_array = malloc(nmemb * size);

	if (!dynamic_array)
		return (NULL);

	ptr = dynamic_array;

	for (i = 0 ; i < (int) nmemb ; i++)
		ptr[i] = 0;

	return (dynamic_array);
}
