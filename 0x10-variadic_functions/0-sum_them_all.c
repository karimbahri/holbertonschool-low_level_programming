#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all arguments
 * @n: number of arguments
 * Return: sum if true or 0 otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list list_of_numbers;

	va_start(list_of_numbers, n);

	for (i = 0 ; i < n ; i++)
		sum += va_arg(list_of_numbers, int);

	va_end(list_of_numbers);

	return (sum);
}
