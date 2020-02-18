#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = _atoi("98");
	printf("%d\n", n);
	n = _atoi("-402");
	printf("%d\n", n);
	n = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", n);
	n = _atoi("2147483644545454564654654645654");
	printf("%d\n", n);
	n = _atoi("0");
	printf("%d\n", n);
	n = _atoi("Suite ");
	printf("%d\n", n);
	n = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
	printf("%d\n", n);
	n = _atoi("");
	printf("%d\n", n);
	return (0);
}
