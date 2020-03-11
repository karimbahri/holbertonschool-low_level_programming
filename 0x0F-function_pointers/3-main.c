#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - perform simple arithmetic operation
 * @argc: size of argv
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int number_1 = 0, number_2 = 0, result = 0;
	int (*function)(int, int);

	if (argc != 4)
		EXIT_WITH_ERROR(98);

	number_1 = atoi(argv[1]);
	number_2 = atoi(argv[3]);

	function = get_op_func(argv[2]);

	if (!function)
		EXIT_WITH_ERROR(99);

	if (!number_2 && (argv[2][0] == '/' || argv[2][0] == '%'))
		EXIT_WITH_ERROR(100);

	result = (*function)(number_1, number_2);

	printf("%d\n", result);
	return (0);
}
