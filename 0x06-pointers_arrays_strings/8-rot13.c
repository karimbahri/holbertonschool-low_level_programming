#include "holberton.h"

/**
 * rot13 - encode string using ROT13
 * @s: string to encode
 * Return: string crypted
 */
char *rot13(char *s)
{
	int i = 0, j = 0, pos = 0;
	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
	'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
	'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
	'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
	'W', 'X', 'Y', 'Z'};

	while (s[i] != '\0')
	{
		for (j = 0 ; alphabet[j] != '\0' ; j++)
		{
			if (s[i] == alphabet[j])
			{
				pos = ((j + 13) % 26) + (26 * (j / 26));
				s[i] = alphabet[pos];
				break;
			}
		}
		i++;
	}

	return (s);
}
