#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - 2D array dynamic allocation
 * @width: width
 * @height: height
 * Return: 2D array
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, **grid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0 ; j <= i ; j++)
				free(grid[j]);

			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
