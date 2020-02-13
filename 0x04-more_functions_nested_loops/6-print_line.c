#include "holberton.h"

/**
 * print_line - print lines
 * @n: length of the line
 */
void print_line(int n)
{
int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
