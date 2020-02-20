#include "holberton.h"

/**
 * leet - crypt string
 * @s: string to crypt
 * Return: string crypted
 */
char *leet(char *s)
{
	int i = 0, j = 0, length = _strlen(s);
	char key[] = {4, 3, 0, 7, 1}, character[] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0 ; i < length ; i++)
	{
		for (j = 0 ; j < 5 ; j++)
		{
			if (s[i] == character[j] || s[i] == (character[j] - ('a' - 'A')))
			{
				s[i] = key[j];
				continue;
			}
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
