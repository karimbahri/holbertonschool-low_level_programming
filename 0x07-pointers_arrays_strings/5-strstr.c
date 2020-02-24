#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locate string inside other string
 * @haystack: string
 * @needle: substring
 * Return: first occurrence of needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, cmpState = 1, pos = 0;

	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		cmpState = 1;
		if (haystack[i] == needle[0])
		{
			pos = i;
			for (j = 1 ; needle[j] != '\0' ; j++)
			{
				if (haystack[i + 1] != needle[j])
					cmpState = 0;
			}
		}
		if (cmpState && pos)
			return (&haystack[pos]);

	}

	return (NULL);
}
