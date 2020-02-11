#include "holberton.h"

/**
*jack_bauer - print minutes
*/
void jack_bauer(void)
{
char h1 = 0, h2 = 0, m1 = 0, m2 = 0;

for (h1 = '0' ; h1 <= '2' ; h1++)
for (h2 = '0' ; h2 <= '9' ; h2++)
for (m1 = '0' ; m1 <= '5' ; m1++)
for (m2 = '0' ; m2 <= '9' ; m2++)
{
if (h1 == '2' && h2 == '3' && m1 == '5' && m2 == '9')
{
	_putchar(h1);
	_putchar(h2);
	_putchar(':');
	_putchar(m1);
	_putchar(m2);
	_putchar('\n');

return;
}

_putchar(h1);
_putchar(h2);
_putchar(':');
_putchar(m1);
_putchar(m2);
_putchar('\n');
}
}
