#include "holberton.h"
/**
*main - check character is lower
*Return: 0
*/
int main(void)
{
	int r = 0;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
