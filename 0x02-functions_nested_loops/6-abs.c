#include "holberton.h"
#include "6-abs.h"
/**
*_abs - return the abs of integer
*@a: integer
*Return: the abs of integer
*/
int _abs(int a)
{
	if (a < 0)
		return ((a) * (-1));
	else
		return (a);
}
