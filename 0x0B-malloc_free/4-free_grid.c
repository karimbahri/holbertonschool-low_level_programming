#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - free 2D array
 * @grid: array to grid
 * @height: array size
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
