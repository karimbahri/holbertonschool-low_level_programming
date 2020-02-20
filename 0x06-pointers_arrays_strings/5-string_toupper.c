#include "holberton.h"

/**
 * string_toupper - transform characters to upper
 * @s: string to check
 * Return: s changed
 */
char *string_toupper(char *s)
{
	int i = 0, length = _strlen(s);

	for (i = 0 ; i < length ; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= ('a' - 'A');
		}
	}

	return (s);
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
