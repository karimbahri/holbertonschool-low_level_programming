#include "holberton.h"
/**
 *print_numbers - print numbers from 0 to 9
 */
void print_numbers(void)
{
char character = 0;

	for (character = '0' ; character <= '9' ; character++)
		_putchar(character);

	_putchar('\n');
}
