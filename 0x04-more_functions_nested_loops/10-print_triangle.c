#include "holberton.h"

/**
 * print_triangle - print triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
int i = 0, j = 0;

if (size <= 0)
	_putchar('\n');
for (i = 0 ; i < size ; i++)
{
	for (j = 0 ; j < size ; j++)
	{
		if (j < (size - i - 1))
			_putchar(' ');

		else
			_putchar('#');
	}
	_putchar('\n');
}
}
