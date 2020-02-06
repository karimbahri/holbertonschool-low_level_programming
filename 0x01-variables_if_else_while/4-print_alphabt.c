#include <stdio.h>
/**
*main - display exception
*Return: 0
*/
int main(void)
{
	char character = 0;

	for (character = 'a' ; character <= 'z' ; character++)

	{
		if (character == 'q' || character == 'e')
			continue;
		else
		putchar(character);
	}
	putchar('\n');
	return (0);
}
