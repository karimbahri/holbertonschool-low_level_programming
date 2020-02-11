#include "holberton.h"

/**
*print_alphabet_x10 - DisplayAlpha
*Return: 0
*/
void print_alphabet_x10(void)
{
char character = 0;
int i = 0;

for (i = 0 ; i < 10 ; i++)
{
for (character = 'a' ; character <= 'z' ; character++)
_putchar(character);
_putchar('\n');
}

}
