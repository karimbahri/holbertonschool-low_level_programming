#include <stdio.h>
/**
*main - reverse printing
*Return: 0
*/
int main(void)
{
	char character = 0;

	for (character = 'z' ; character >= 'a' ; character--)
		putchar(character);
	putchar('\n');
	return (0);
}
