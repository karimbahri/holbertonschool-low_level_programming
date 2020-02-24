#include "holberton.h"

/**
 * _strchr - locate character in stirng
 * @s: string
 * @c: character
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);

}
