#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: int type pointer
 * @height: int type pointer
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (!grid)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
