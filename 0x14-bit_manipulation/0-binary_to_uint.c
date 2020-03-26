#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - convert binary to integer
 * @b: binary number
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, i = 0, size = 0;

	if (!b)
		return (0);

	size = _strlen(b);

	while (size)
	{
		if (b[size - 1] == '0' || b[size - 1] == '1')
			number += power(2 * (b[size - 1] - '0'), i);

		else
			return (0);

		i++;
		size--;
	}
	return (number);
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

/**
 * _strlen - return the length of a string
 * @s: the string to check
 * Return: lenght
 */
int _strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
