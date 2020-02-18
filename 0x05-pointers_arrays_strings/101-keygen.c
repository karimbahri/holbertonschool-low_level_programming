#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate password
 * Return: 0
 */
int main(void)
{
	char passwd[20] = {0};
	int i = 0;

	srand(time(NULL));

	for (i = 0 ; i < 7 ; i++)
	{
		passwd[i] = (rand() % (122 - 48)) + 48;
	}
	printf("%s", passwd);
	return (0);
}
