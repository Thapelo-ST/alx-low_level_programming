#include "main.h"

/**
 * free_grid  - frees up a grid
 *
 * @grid: grid to check
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
