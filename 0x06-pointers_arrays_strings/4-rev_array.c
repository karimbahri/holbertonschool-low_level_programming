#include "holberton.h"

/**
 * reverse_array - reverse array
 * @a: the array
 * @n: size
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp = 0;

	for (i = 0 ; i < n / 2 ; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
