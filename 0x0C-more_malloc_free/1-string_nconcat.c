#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concat two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters to concat
 * Return: pointer to newly space containing a + b or NULL if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	int i = 0, len_s1 = 0, len_s2 = 0;

	if (s1)
		len_s1 = _strlen(s1);

	if (s2)
		len_s2 = _strlen(s2);

	if ((int) n > len_s2)
		n = len_s2;


	string = malloc(sizeof(char) * (len_s1 + n) + 1);

	if (!string)
		return (NULL);

	while (i < len_s1)
	{
		string[i] = s1[i];
		i++;
	}

	while (i - len_s1 < (int) n)
	{
		string[i] = s2[i - len_s1];
		i++;
	}

	string[i] = '\0';

	return (string);
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
