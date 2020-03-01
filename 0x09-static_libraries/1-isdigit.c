#include "holberton.h"

/**
*_isdigit - check the character is digit
*@c: the character to check
* Return: 1 if digit 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);

	return (0);
}
