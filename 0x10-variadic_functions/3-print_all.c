#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print any type of variable
 * @format: type desired
 */
void print_all(const char * const format, ...)
{
	va_list list_of_variables;
	int i = 0;
	bool is_type = TRUE;
	char *txt;

	va_start(list_of_variables, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(list_of_variables, int));
					break;
			case 'c':
				printf("%c", va_arg(list_of_variables, int));
					break;
			case 'f':
				printf("%f", va_arg(list_of_variables, double));
					break;
			case 's':
				txt = va_arg(list_of_variables, char*);
				if (!txt)
				{
					printf("(nil)");
					break;
				}
				printf("%s", txt);
					break;
			default:
				is_type = FALSE;
					break;
		}
		if (is_type && format[i + 1])
			printf(", ");
		i++;
	}
	NEWLINE;
	va_end(list_of_variables);
}
