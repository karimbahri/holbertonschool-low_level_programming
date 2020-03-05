#include <stdlib.h>
#include "holberton.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *dynamic_array;

	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	dynamic_array = malloc(new_size);

	if (!dynamic_array)
		return (NULL);

	if (!ptr)
		return (dynamic_array);

	set_memory(dynamic_array, ptr, new_size, old_size);

	free(ptr);
	return (dynamic_array);
}


void set_memory(char *array, char *src, int new_size, int old_size)
{
	int i = 0;

	while (!(i > old_size) && !(i > new_size))
	{
		array[i] = src[i];
		i++;
	}
}