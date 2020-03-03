#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - return string duplicated with str
 * @str: string to duplicate
 * Return: the new array Or NULL if failed
 */
char *_strdup(char *str)
{
	char *array = NULL;
	int str_length = 0;

	if (str == NULL || !_strlen(str))
		return (NULL);

	str_length = _strlen(str);

	array = malloc(sizeof(char) * str_length);

	if (array == NULL)
		return (NULL);

	_strcpy(array, str);
	return (array);
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

