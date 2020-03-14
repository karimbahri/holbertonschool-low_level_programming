#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers separated by separator and followed by newline
 * @separator: separator string
 * @n: number of arguments to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list_of_numbers;

	va_start(list_of_numbers, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(list_of_numbers, int));
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list_of_numbers);
}
