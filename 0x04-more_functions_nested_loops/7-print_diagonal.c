#include "holberton.h"

/**
 * print_diagonal - print diagonal
 * @n: length
 */
void print_diagonal(int n)
{
int i = 0, j = 0;

	if (n <= 0)
		_putchar('\n');

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < i ; j++)
		{
			if (i != 0)
				_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
