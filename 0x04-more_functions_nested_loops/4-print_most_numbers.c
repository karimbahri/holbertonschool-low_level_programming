#include "holberton.h"

/**
 * print_most_numbers - print numbers from 0 - 9
 */
void print_most_numbers(void)
{
char character = 0;

for (character = '0' ; character <= '9' ; character++)
	{
	if (character != '2' && character != '4')
		_putchar(character);

	}
_putchar('\n');
}
