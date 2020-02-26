#include "holberton.h"

/**
 * is_prime_number - check if n is prime
 * @n: the number to check
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	int i = n / 2;

	if (n < 0)
		i *= -1;

	if (n < 2 )
		return (0);

	return (check_prime(i, n));
}

/**
 * check_prime - check if n is prime
 * @i: divisor
 * @n: number to check
 * Return: 1 if prime 0 otherwise
 */
int check_prime(int i, int n)
{
	if (i <= 1)
		return (1);

	if (n % i)
		return (check_prime(i - 1, n));

	else
		return (0);

}
