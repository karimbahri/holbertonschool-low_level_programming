#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate password
 * Return: 0
 */
int main(void)
{
	char *passwd[] = {"dddddddddddddddddddddddddddH", "}}}}}}}}}}}}}}}}}}}}}KH", "K}}}}}}}}}}}}}}}}}}}}}H", 
	"H}}}}}}}}}}}}}}}}}}}}}K", "ddddddddddddddddddddHddddddd", "ddddddddddddddddddddHddddddd", "}}}K}}}}}}}}}}}}}}}}}}H",
	"Hddddddddddddddddddddddddddd", "dHdddddddddddddddddddddddddd", "ddHddddddddddddddddddddddddd", "dddHdddddddddddddddddddddddd"
	"}}}}}}}}}}}}}KH}}}}}}}}", "}}}}}}}}}}}}}HK}}}}}}}}", "}}}}}}}}HK}}}}}}}}}}}}}", "KH}}}}}}}}}}}}}}}}}}}}}", "HK}}}}}}}}}}}}}}}}}}}}}"};
	int nbRand = 0;
	srand(time(NULL));

	nbRand = rand() % 17;
	printf("%s", passwd[nbRand]);
	return (0);
}
