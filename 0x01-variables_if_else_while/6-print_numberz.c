#include <stdio.h>
/**
*main - display numbers using putchar
*Return: 0
*/
int main(void)
{
	int number = 0;

	for (number = 48 ; number < 58 ; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
