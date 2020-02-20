#include "holberton.h"

/**
 * _strncat - concat two strings
 * @dest: destination
 * @src: source
 * @n: number of character
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, lengthDest = _strlen(dest);

	if (src)
	{
		for (i = 0 ; i < n ; i++)
		{
			dest[i + lengthDest] = src[i];

			if (src[i] == '\0')
				break;
		}
	}
	return (dest);
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
