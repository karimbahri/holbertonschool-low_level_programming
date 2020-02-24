#include "holberton.h"

/**
 * _memcpy - copy memories area
 * @dest: destination
 * @src: source
 * @n: number of character
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
