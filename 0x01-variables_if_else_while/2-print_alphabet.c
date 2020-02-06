#include <stdio.h>
/**
*main - display alphabet
*Return: 0
*/
int main(void)
{
	char character = 0;

	for (character = 'a' ; character <= 'z' ; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
