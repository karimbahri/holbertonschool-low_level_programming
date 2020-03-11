#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - return the index of an integer in array
 * @array: array to search in
 * @size: size of the array
 * @cmp: function to check
 * Return: index of the integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
