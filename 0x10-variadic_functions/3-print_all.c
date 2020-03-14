#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print a char
 * @list_of_variables: character to print
 */
void print_char(va_list list_of_variables)
{
	printf("%c", va_arg(list_of_variables, int));
}

/**
 * print_int - print an integer
 * @list_of_variables: integer to print
 */
void print_int(va_list list_of_variables)
{
	printf("%d", va_arg(list_of_variables, int));
}

/**
 * print_float - print a float
 * @list_of_variables: float to print
 */
void print_float(va_list list_of_variables)
{
	printf("%f", va_arg(list_of_variables, double));
}

/**
 * print_str - print a string
 * @list_of_variables: string to print
 */
void print_str(va_list list_of_variables)
{
	if (!list_of_variables)
		printf("(nil)");
	else
		printf("%s", va_arg(list_of_variables, char*));
}

/**
 * print_all - print any type of variable
 * @format: type desired
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list list_of_variables;
	char *sep = "";
	TYPES t[5] = {{'c', print_char}, {'i', print_int},
					{'f', print_float}, {'s', print_str},
					{0, NULL} };

	va_start(list_of_variables, format);
	while (format[i])
	{
		while (t[j].type_format)
		{
			if (format[i] == t[j].type_format)
			{
				printf("%s", sep);
				t[j].print_type(list_of_variables);
				sep = ", ";
				break;
			}
			j++;
		}
		i++, j = 0;
	}
	NEWLINE;

	va_end(list_of_variables);

}
