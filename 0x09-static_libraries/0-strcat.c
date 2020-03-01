#include "holberton.h"
/**
 * _strcat - concat two strings
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, lengthSrc = _strlen(src), lengthDest = _strlen(dest);

	if (src)
	{
		for (i = 0 ; i <= lengthSrc ; i++)
		{
			dest[i + lengthDest] = src[i];
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
