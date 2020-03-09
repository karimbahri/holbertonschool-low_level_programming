#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the path of the current file compiled
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
