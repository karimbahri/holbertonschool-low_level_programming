#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print n element of an array
 * @a: the array to display
 * @n: the number of element
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);

		else
			printf("%d", a[i]);
	}
	printf("\n");
}
