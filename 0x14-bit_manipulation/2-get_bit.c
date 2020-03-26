#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: integer
 * @index: given index
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int number = power(2, index), result;

	if (n < number)
		return (-1);

	result = number & n;

	if (result == number)
		return (1);

	else
		return (0);
}



/**
 * power - compute a ^ b
 * @a: first number
 * @b: second number
 * Return: a ^ b
 */
unsigned long int power(unsigned int a, unsigned int b)
{
	unsigned int i = 0, tmp = a;

	if (!b && a)
		return (1);

	for (i = 1 ; i < b ; i++)
		a *= tmp;

	return (a);
}
