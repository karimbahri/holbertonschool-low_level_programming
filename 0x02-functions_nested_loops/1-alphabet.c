#include "holberton.h"

/**
*print_alphabet - display alphabet
*/
void print_alphabet(void)
{
	char character = 0;

	for (character = 'a' ; character <= 'z' ; character++)
		_putchar(character);
	_putchar('\n');
}
