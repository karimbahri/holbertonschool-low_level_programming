#include "holberton.h"

/**
 * cap_string - capitalize strings
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0, length = _strlen(s);

	for (i = 0 ; i <= length ; i++)
	{
		if (s[i - 1] == ' ' || s[i] == '\t' || s[i] == '\n'
		|| s[i] == ',' || s[i] == ';' ||
		s[i] == '.' || s[i] == '!' ||
		s[i] == '?' || s[i] == '"' ||
		s[i] == '(' || s[i] == ')' ||
		s[i] == '{' || s[i] == '}' || i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
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
