#include "holberton.h"
#include "1-alphabet.h"

/**
*print_alphabet - display alphabet
*/
void print_alphabet(void)
{
	char character = 0;

	for (character = 'a' ; character <= 'z' ; character++)
		_putchar(character);
	putchar('\n');
}
