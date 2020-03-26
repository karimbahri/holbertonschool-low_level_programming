#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * flip_bits - return the number of flipped bits
 * @n: first integer
 * @m: second integer
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;

	return (number_of_bit(difference));
}

/**
 * number_of_bit - return number of bit '1' in an integer
 * @number: number to check
 * Return: number of bits
 */
int number_of_bit(unsigned long int number)
{
	int nb_bit = 0;

	while (number)
	{
		nb_bit += number & 1;
		number = number >> 1;
	}
	return (nb_bit);
}
