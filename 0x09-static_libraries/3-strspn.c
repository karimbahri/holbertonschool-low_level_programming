#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, length = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
			}
		}

		if (s[i] == ' ')
			break;
	}

	return (length);
}
