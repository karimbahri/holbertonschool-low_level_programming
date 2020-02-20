#include "holberton.h"

/**
 * print_number - print integer
 * @n: the integer
 */
void print_number(int n)
{
	int tmp = n, div = 10, length = 1;

	while (n / div)
	{
		div *= 10;
		length++;
	}

	if (n < 0)
	{
		_putchar('-');
		tmp = n * -1;
	}


	div /= 10;

	while (length)
	{
		_putchar((tmp / div) + '0');
		tmp %= div;
		div /= 10;
		length--;
	}

}
