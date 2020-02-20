#include "holberton.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum = 0, lengthN1 = _strlen(n1), lengthN2 = _strlen(n2) , i = 1;

	while (i == size_r)
	{
		sum = (n1[lengthN1 - i] - '0') + (n2[lengthN2 - i] - '0');
		if (sum > 9)
		{
			r[size_r - i] = (sum % 10) + '0';
			r[size_r - i - 1] = (sum / 10) + '0';
		}
		else
			r[size_r - i] = sum;

		i++;
	}

	return (r);
}

/**
 * _strlen - return the length of a string
 * @s: the string to check
 * Return: lenght
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
