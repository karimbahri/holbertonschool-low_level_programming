#include "holberton.h"

/**
*print_last_digit - print 3 last digit
*@a: number to check
*Return: value of the last digit of a
*/
int print_last_digit(int a)
{
	int last = 0;

	last = a % 10;
	if (last < 0)
		last *= (-1);
	_putchar('0' + last);

	return (last);
}
