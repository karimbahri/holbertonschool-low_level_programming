#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concat two strings
 * @s1: first string
 * @s2: second string
 * Return: newly allocated space containing s1 + S2 OR NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	char *string = NULL;

	string = malloc((_strlen(s1) + _strlen(s2)) * sizeof(char) + 1);

	if (string == NULL)
		return (NULL);

	_strcpy(string, s1);

	string = _strcat(string, s2);

	return (string);
}

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

/**
 * _strcpy - copy a string from src to dest
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0 ; i <= _strlen(src) ; i++)
		dest[i] = src[i];

	return (dest);
}
