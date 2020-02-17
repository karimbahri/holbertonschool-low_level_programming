#include "holberton.h"

/**
 * puts_half - print 2nd half of character
 * @str: string to check
 */
void puts_half(char *str)
{
	int begin = 0, i = 0;

	if ((_strlen(str) % 2))
		begin = (_strlen(str) - 1) / 2;

	else
		begin = _strlen(str) / 2;

	for (i = begin ; i < _strlen(str) ; i++)
		_putchar(str[i]);

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
