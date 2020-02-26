#include "holberton.h"

/**
 * _strlen_recursion - count the length of string
 * @s: string to count
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (!*s)
		return (0);

	length = _strlen_recursion(s + 1);

	return (length + 1);
}
