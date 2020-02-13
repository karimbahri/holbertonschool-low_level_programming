#include "holberton.h"

/**
 * print_square - print square
 * @size: size of the square
 */
void print_square(int size)
{
	int i = 0, j = 0;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
