#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings separated with -separator-
 * @separator: separator string
 * @n: number of arguments to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list_of_strings;

	va_start(list_of_strings, n);

	for (i = 0 ; i < n ; i++)
	{
		char *string = va_arg(list_of_strings, int);

		if (string)
			printf("%s", string);
		else
			printf("(nil)");

		if (i != n - 1 && separator)
			printf("%s", separator);

	}
	printf("\n");
}
