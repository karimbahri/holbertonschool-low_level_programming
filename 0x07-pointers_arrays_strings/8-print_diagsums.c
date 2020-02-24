#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of diagonal square
 * @a: array
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, sum_Left = 0, sum_Right = 0;

	while (i < size && j < size)
	{
		sum_Left += *(a + size * i + j);
		sum_Right += *(a + size * i + (size - j - 1));
		i++, j++;
	}

	printf("%d, %d\n", sum_Left, sum_Right);

}
