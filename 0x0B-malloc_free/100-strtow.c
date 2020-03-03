#include <stdlib.h>
#include "holberton.h"

/**
 * strtow - convert string to words
 * @str: string to convert
 * Return: array of words
 */
char **strtow(char *str)
{
	char **arrayOfWords = NULL;
	int nb_words = 0, i = 0, pos = 0, j = 0, wordLength = 0;

	if (!str || !*str)
		return (NULL);

	nb_words = getNumbWords(str);

	arrayOfWords = malloc(sizeof(char *) * nb_words + 1);

	if (!arrayOfWords)
		return (NULL);

	for (i = 0 ; i < nb_words - 1 ; i++)
	{
		wordLength = get_length_word(str, &pos);
		arrayOfWords[i] = malloc(sizeof(char) * wordLength + 1);

		if (!arrayOfWords[i])
			return (NULL);

		for (j = 0 ; j < wordLength ; j++)
		{
			arrayOfWords[i][j] = str[pos - wordLength + j];
		}
		arrayOfWords[i][j] = '\0';
	}

	return (arrayOfWords);
}

/**
 * getNumbWords - get the number of words in string
 * @str: string to check
 * Return: number of words
 */
int getNumbWords(char *str)
{
	int number = 0, i = 0;

	while (str[i])
	{
		if (str[i] != ' ' && str[i])
		{
			number++;
			while (str[i] != ' ' && str[i])
				i++;

		}
			i++;
	}

	return (number);
}

int get_length_word(char *str, int *pos)
{
	int length = 0;


	while (str[*pos])
	{
		while (str[*pos] != ' ' && str[*pos])
			length++, *pos = *pos + 1;

		if (length)
			break;
	}
	return (length);
}
