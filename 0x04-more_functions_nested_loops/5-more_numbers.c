#include "holberton.h"

/**
 * more_numbers - print numbers from 0 to 14
 */
void more_numbers(void)
{
char u = 0, d = 0;
int i = 0;
	for (i = 0 ; i < 10 ; i++)
	{
		for (d = '0' ; d < '2' ; d++)
		{
			for (u = '0' ; u <= '9' ; u++)
			{
				if (d == '1')
				{
					_putchar(d);
				}

			_putchar(u);

				if (d == '1' && u == '4')
					break;
			}

			if (d == '1' && u == '4')
				break;
		}
		_putchar('\n');
	}
}
