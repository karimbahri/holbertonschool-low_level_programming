#include "search_algos.h"

/**
 * linear_search - search element in given array
 * @array: array
 * @size: size of the array
 * @value: value
 * Return: index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0 ; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
