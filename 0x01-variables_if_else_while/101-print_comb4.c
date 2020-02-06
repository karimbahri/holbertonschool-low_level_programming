#include <stdio.h>

/**
*main - comb 3 digits
*Return: 0
*/
int main(void)
{
	int number1 = 0, number2 = 0, number3 = 0;

	for (number1 = 48 ; number1 < 58 ; number1++)
		for (number2 = 48 ; number2 < 58 ; number2++)
			for (number3 = 48 ; number3 < 58 ; number3++)
			{
				if (number1 != number2 && number1 != number3 && number2 != number3)
				if (number1 < number2 && number2 < number3)
				{
					putchar(number1);
					putchar(number2);
					putchar(number3);
					if (number1 != 55 || number2 != 56 || number3 != 57)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
				putchar('\n');
	return (0);
}
