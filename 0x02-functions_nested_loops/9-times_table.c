#include "holberton.h"

/**
* times_table - print 9 time table
*/
void times_table(void)
{
	int i = 0, j = 0, mult = 0;
	char u, d;

	for (i = 0 ; i <= 9 ; i++)
		for (j = 0 ; j <= 9 ; j++)
		{
			mult = i * j;
			if (mult > 9)
			{
				u = (mult % 10) + '0';
				d = (mult / 10) + '0';
				_putchar(d);
				_putchar(u);
				if (j < 9)
				{
				_putchar(',');
				_putchar(' ');
				}
				else
				{
					_putchar('$');
					_putchar('\n');
				}
			}
			else
			{
				if (j < 9)
				{
				_putchar(mult + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
				else
				{
					_putchar('$');
					_putchar('\n');
				}
			}

			if (j < 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			else
			{
				_putchar('$');
				_putchar('\n');
			}
		}
}
