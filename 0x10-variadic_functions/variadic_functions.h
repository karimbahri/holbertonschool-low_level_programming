#ifndef __VARIADIC__
#define __VARIADIC__

#define NEWLINE printf("\n")
#include <stdarg.h>
/**
 * enum bool - boolean type
 * @FALSE: false value
 * @TRUE: true value
 */
typedef enum bool
{
	FALSE,
	TRUE
} bool;

/*-------------------PROTOTYPES-------------------*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
