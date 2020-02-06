#include <stdio.h>
/**
*main - display exception
*Result: 0
*/
int main(void)
{
	char character = 0;

	for (character = 'a' ; character <= 'z' ; character++)

	{
		if (character == 'q' || character == 'e')
			continue;
		putchar(character);
	}
	putchar('\n');
	return (0);
}
