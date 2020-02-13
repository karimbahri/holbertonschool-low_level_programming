#include <stdio.h>

/**
 * main - fizzBuzz
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 1 ; i < 101 ; i++)
	{
		if (!(i % 3))
			printf("Fizz ");

		else if (!(i % 5))
			printf("Buzz ");

		else if (!(i % 3) && !(i % 5))
			printf("FizzBuzz ");

		else
			printf("%d ", i);

	}
	printf("\n");
	return (0);
}
