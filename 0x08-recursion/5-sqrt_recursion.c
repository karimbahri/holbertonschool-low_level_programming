#include "holberton.h"

/**
 * _sqrt_recursion - compute the natural square of number
 * @n: the integer
 * Return: natural square
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (check_sqrt(i, n));

}
/**
 * check_sqrt - compute the natural square of n
 * @i: sqrt
 * @n: integer
 * Return: i if exist -1 else
 */
int check_sqrt(int i, int n)
{
	if ((i * i) == n)
		return (i);

	else if (i <= n)
		return (check_sqrt(i + 1, n));
	else
		return (-1);
}
