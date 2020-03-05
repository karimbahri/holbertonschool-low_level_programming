#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: size
 * Return: pointer to newly memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *dynamic_array;

	dynamic_array = malloc(b);

	if (!dynamic_array)
		exit(98);

	return (dynamic_array);
}
