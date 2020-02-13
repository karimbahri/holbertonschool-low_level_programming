#include <stdio.h>

/**
 * main - display the largest prime factor
 * Return: 0
 */
int main(void)
{
	long int number = 612852475143;
	long int div = 0, largFactor = 0;

	while (number)
	{
		if (number % div)
			div++;

		else
		{
			largFactor = number;
			number /= div;

			if (number == 1)
			{
				printf("%ld", largFactor);
				break;
			}
		}
	}

	return (0);
}
