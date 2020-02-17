#include "holberton.h"

/**
 * print_rev - print string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i = 0, length = _strlen(s);

	for (i = 1 ; i < length + 1 ; i++)
	{
		_putchar(s[length - i]);
	}
	_putchar('\n');
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
