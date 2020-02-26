#include "holberton.h"

/**
 * _pow_recursion - compute the value of x raised to the power of y
 * @x: first integer
 * @y: second integer
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	int power = 1;

	if (x < 0)
		return (-1);

	if (!y)
		return (1);

	power = _pow_recursion(x, y - 1);

	return (power * power);
}
