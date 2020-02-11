#include "holberton.h"

/**
*times_table - print 9 time table
*/
void times_table(void)
{
	int i = 0, j = 0, mult = 0;
	char u = 0, d = 0;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			mult = i * j;
			u = mult % 10;
			d = mult / 10;

			if (mult > 9)
			{
				_putchar(d + '0');
				_putchar(u + '0');
				checkNumber(j);
			}
			else
			{
				if (j)
					_putchar(' ');

				_putchar(u + '0');
				checkNumber(j);
			}
		}
	}
}

/**
*checkNumber - check num is equal to 9
*@num: the number to check
*/
void checkNumber(int num)
{
	if (num < 9)
	{
		_putchar(',');
		_putchar(' ');
	}
	else if (num == 9)
	{
		_putchar('\n');
	}
}
