#include <stdio.h>
/**
*main - print comb3
*Return: 0
*/
int main(void)
{
	int number1 = 0, number2 = 0;

	for (number1 = 48 ; number1 < 58 ; number1++)
		for (number2 = 48 ; number2 < 58 ; number2++)
		{
			if (number1 != number2 && number1 < number2)
			{
				putchar(number1);
				putchar(number2);
				if ( (number1 != 57 || number2 != 57) )
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}
