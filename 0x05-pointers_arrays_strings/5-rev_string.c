#include "holberton.h"

/**
 * rev_string - reverse string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i = 1, length = _strlen(s);
	char tmp = 0;

	for (i = 0 ; i < length / 2 ; i++)
	{
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;
	}
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
