#include "holberton.h"

/**
 * puts2 - puts other character
 * @str: string to print
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!(str[i] % 2) || i == 0)
			_putchar(str[i]);

		i++;
	}
	_putchar('\n');
}
