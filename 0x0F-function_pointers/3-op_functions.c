#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - add a & b
 * @a: first integer
 * @b: second integer
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtrackt b from a
 * @a: first integer
 * @b: second integer
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply a by b
 * @a: first integer
 * @b: second integer
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a with b
 * @a: first integer
 * @b: second integer
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - compute the remainer of a div b
 * @a: first integer
 * @b: second integer
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
