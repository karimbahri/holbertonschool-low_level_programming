#include "holberton.h"

/**
 * _atoi - convert string to integer
 * @s: string to convert
 * Return: the integer
 */
int _atoi(char *s)
{
	int integer = 0, i = 0, sign = 1;

	while (s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			sign *= -1;

		i++;
	}

	if (s[i] == '\0')
		integer = 0;

	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] >= '0' && s[i] <= '9')
			integer = (integer * 10) + (s[i] - '0');

		i++;
	}

	integer *= sign;

	return (integer);
}
