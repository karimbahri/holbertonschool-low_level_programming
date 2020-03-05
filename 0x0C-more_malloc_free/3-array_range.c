#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - create array ordered from min to max
 * @min: begin
 * @max: end
 * Return: ordered array
 */
int *array_range(int min, int max)
{
	int *ranged_array;
	int i = 0;

	if (min > max)
		return (NULL);

	ranged_array = malloc((max - min + 1) * sizeof(int));

	if (!ranged_array)
		return (NULL);

	for (i = min ; i <= max ; i++)
		ranged_array[i - min] = i;

	return (ranged_array);
}
