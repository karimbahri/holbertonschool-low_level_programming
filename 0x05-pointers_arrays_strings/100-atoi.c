#include "holberton.h"

/**
 * _atoi - convert string to integer
 * @s: string to convert
 * Return: the integer
 */
int _atoi(char *s)
{
	int number = 0, i = 0, sign = 1;

	while (s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			sign *= -1;

		i++;
	}

	if (s[i] == '\0')
		number = 0;

	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] >= '0' && s[i] <= '9')
			number = (number * 10) + (s[i] - '0');

		i++;
	}

	number *= sign;

	return (number);
}
