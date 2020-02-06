#include <stdio.h>
/**
*main - combination
*Return: 0
*/
int main(void)
{
	int number = 0;

	for (number = 48 ; number < 58 ; number++)
{
		putchar(number);
		if (number != 57)
		{
		putchar(',');
		putchar(' ');
		}
}
	putchar('\n');
	return (0);
}
