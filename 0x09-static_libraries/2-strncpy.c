#include "holberton.h"

/**
 * _strncpy - copy n characters of string in other
 * @dest: destination
 * @src: source
 * @n: number of characters
 * Return: dst
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

		for (i = 0 ; i < n ; i++)
		{
			dest[i] = src[i];

			if (src[i] == '\0')
				break;
		}

		while (i < n)
		{
			dest[i] = '\0';
			i++;
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
