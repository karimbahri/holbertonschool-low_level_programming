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

	while (*haystack)
	{
		char *begin = haystack, *subStr = needle;

		while (*haystack && *subStr && *haystack == *subStr)
		{
			haystack++;
			subStr++;
		}

		if (!*subStr)
			return (begin);

		haystack = begin + 1;

	}
	return (NULL);
}
