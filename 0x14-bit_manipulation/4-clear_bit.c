#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * clear_bit - set bit to 0 at given index
 * @n: integer to change
 * @index: given index
 * Return: 1 if true or 0 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > ULI_MAX)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);

}
