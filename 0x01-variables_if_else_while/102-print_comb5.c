#include <stdio.h>

/**
*main - combination 2 by 2
*Return: 0
*/
int main(void)
{
	int number1 = 0, number2 = 0, number3 = 0, number4 = 0;

for (number1 = 48 ; number1 < 58 ; number1++)
for (number2 = 48 ; number2 < 58 ; number2++)
for (number3 = 48 ; number3 < 58 ; number3++)
for (number4 = 48 ; number4 < 58 ; number4++)
{
if ((number1 * 10) + number2 < (number3 * 10) + number4)
{
putchar(number1);
putchar(number2);
putchar(' ');
putchar(number3);
putchar(number4);
if (number1 != 57 || number2 != 56 || number3 != 57 || number4 != 57)
putchar(',');
}

}
putchar('\n');
return (0);
}
