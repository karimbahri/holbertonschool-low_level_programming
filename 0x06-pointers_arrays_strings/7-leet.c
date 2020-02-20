#include "holberton.h"

/**
 * leet - crypt string
 * @s: string to crypt
 * Return: string crypted
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char key[] = {'4', '3', '0', '7', '1'};
	char character[] = {'a', 'e', 'o', 't', 'l'};

	while (s[i] != '\0')
	{
		for (j = 0 ; j < 5 ; j++)
		{
			if (s[i] == character[j] || s[i] == (character[j] - ('a' - 'A')))
			{
				s[i] = key[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
