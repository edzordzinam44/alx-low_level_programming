#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees memory allocated for a 2D grid.
 * @grid: The double pointer to the 2D grid.
 * @height: The height of the grid.
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
