#include <stdio.h>
/**
*main - display alphabetLowUp
*Return: 0
*/
int main(void)
{
	char character = 0;

	for (character = 'a' ; character <= 'z' ; character++)
		putchar(character);
	for (character = 'A' ; character <= 'Z' ; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
