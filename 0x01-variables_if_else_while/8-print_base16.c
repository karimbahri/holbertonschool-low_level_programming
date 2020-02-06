#include <stdio.h>
/**
*main - display hexadecimal
*Return: 0
*/
int main(void)
{
	char character = 0;

	for (character = 48 ; character < 58 ; character++)
		putchar(character);
	for (character = 'a' ; character < 'g' ; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
