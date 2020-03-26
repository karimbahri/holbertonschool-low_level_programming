#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * set_bit - set bit at index
 * @n: integer to change
 * @index: index
 * Return: 1 if true -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > ULI_MAX)
		return (-1);

	*n = *n | 1 << index;

	return (1);
}
