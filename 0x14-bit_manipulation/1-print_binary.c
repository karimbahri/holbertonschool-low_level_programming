#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - print integer in binary base
 * @n: integer to convert
 */
void print_binary(unsigned long int n)
{
	if (n != 0 && n != 1)
	{
		print_binary(n >> 1);
		putchar((n & 1) + '0');
		return;
	}
	putchar(n + '0');
}
