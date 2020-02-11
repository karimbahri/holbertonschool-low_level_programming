#include <stdio.h>

/**
*main - multiples
*Return: 0
*/
int main(void)
{
	int i = 0, sum = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (!(i % 3) || !(i % 5))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
