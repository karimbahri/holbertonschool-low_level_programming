#include "search_algos.h"

/**
 * binary_search - find element using binary search
 * @array: array
 * @size: size
 * @value: value
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	int right, left, middle;

	if (!array || !value)
		return (-1);

	right = (int)size - 1, left = 0;

	while (left <= right)
	{
		middle = (left + right) / 2;

		print_searching(array, left, right);
		if (array[middle] == value)
			return (middle);

		else if (array[middle] < value)
			left = middle + 1;

		else
			right = middle - 1;
	}

	return (-1);
}

/**
 * print_searching - print searching progress
 * @array: array
 * @left: left
 * @right: right
 */
void print_searching(int array[], int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left ; i <= right ; i++)
	{
		if (i == right)
			printf("%d\n", array[i]);

		else
			printf("%d, ", array[i]);
	}
}
