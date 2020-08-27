#include <math.h>
#include "search_algos.h"

/**
 * jump_search - find element using jump search
 * @array: array
 * @size: size
 * @value: value
 * Return: index
 */
int jump_search(int *array, size_t size, int value)
{
	int beg = 0, end, i;

	if (!array || !size)
		return (-1);

	end = sqrt(size);

	while (array[end] <= value && (size_t)end < size)
	{
		printf("Value checked array[%d] = [%d]\n", beg, array[beg]);
		beg = end;
		end += sqrt(size);
		if ((size_t)end > size - 1)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", beg, end);
	for (i = beg ; i < end ; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
