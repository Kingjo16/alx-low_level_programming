#include <stdlib.h>
#include "main.h"

/**
 * free_grid - This frees the memory allocate for the grid
 * @grid: Grid
 * @height: Grid hight
 */
void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL || height == 0)
		return;

	for (j = 0; j < height; j++)
		free(grid[j]);

	free(grid);
}
