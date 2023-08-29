#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2d integer grid
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to grid or null
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int j, k;

	/* Check for invalid input */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the grid */
	grid = calloc(height, sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		grid[j] = calloc(width, sizeof(int));
		if (grid[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(grid[k]);
		}
		free(grid);
		return (NULL);
	}

	/* Initialize the grid to 0 */
	for (j = 0; j < height; j++)
		for (k = 0; k < width; k++)
		{
			grid[j][k] = 0;
		}

	return (grid);
}
