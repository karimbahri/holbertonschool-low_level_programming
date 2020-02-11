#include "holberton.h"

/**
*print_last_digit - print 3 last digit
*@a: number to check
*Return: value of the last digit of a
*/
int print_last_digit(int a)
{
	int last = 0;

	if (a < 0)
		a *= -1;

	last = a % 10;
	_putchar('0' + last);

	return (last);
}
