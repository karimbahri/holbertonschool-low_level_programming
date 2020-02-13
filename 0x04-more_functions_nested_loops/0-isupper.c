#include "holberton.h"
/**
*_isupper - check the character is upper
*@c: the caracter to check
*Return: 1 if upper 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
