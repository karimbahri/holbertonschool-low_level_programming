#include "holberton.h"

/**
 * _memset - fills the memory with constant byte character
 * @s: string
 * @b: the character
 * @n: number of the characters
 * Return: string modified
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0 ; i < n ; i++)
		s[i] = b;

	return (s);
}
