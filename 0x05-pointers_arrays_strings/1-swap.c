#include "holberton.h"

/**
 * swap_int - swap a and b
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
