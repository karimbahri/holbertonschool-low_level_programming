#include "holberton.h"

/**
 * print_number - print integer using _putchar
 * @n: integer
 */
void print_number(int n)
{
int tmp = n, div = 0, lgth = 0;

if (n < 0)
{
	tmp = -tmp;
	_putchar('-');
}
lgth = length(tmp);
while (1)
{
	_putchar(firstDigit(tmp) + '0');
	if (tmp < 10 && length(tmp) == lgth)
		break;
	div = otherDigits(tmp);
	tmp %= div;
	if (tmp < (div / 10))
		{
		_putchar('0');
		}
	lgth--;	
}

}


/**
 * firstDigit - find the first digit of integer
 * @n: integer to check
 * Return: tmp
 */
int firstDigit(int n)
{
	int tmp = n;

		
	while (tmp >= 10)
	{
		tmp /= 10;
	}

	return (tmp);
}

/**
 * otherDigits - find the number to divide to get the first digit
 * @n: integer to check
 * Return: div
 */
int otherDigits(int n)
{
int tmp = n, div = 1;

	while (tmp >= 10)
	{
		tmp /= 10;
		div *= 10;
	}

	return (div);
}


int length(int n)
{
	int tmp = n, i = 0;

	while (tmp > 9 || tmp < -9)
	{
		tmp /= 10;
		i++;
	}
	return (i);
}