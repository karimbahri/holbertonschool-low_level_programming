#include "holberton.h"
/**
*_islower - checks if the character is lower
*@c: the character to check
*Return: 1 if true and 0 if false
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
