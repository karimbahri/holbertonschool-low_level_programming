#ifndef __VARIADIC__
#define __VARIADIC__

#define NEWLINE printf("\n")
#include <stdarg.h>
/*--------------------STRUCTS---------------------*/
/**
 * struct TYPES - types format and functions to perform the display
 * @type_format: character
 * @print_type: function to print
 */
typedef struct TYPES
{
	char type_format;
	void (*print_type)(va_list);

} TYPES;

/*-------------------PROTOTYPES-------------------*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list list_of_variables);
void print_int(va_list list_of_variables);
void print_float(va_list list_of_variables);
void print_str(va_list list_of_variables);
#endif
