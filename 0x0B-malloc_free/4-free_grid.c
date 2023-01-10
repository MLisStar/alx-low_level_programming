#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free the 2-D array of ints
 * @grid: the 2-D array of ints
 * @height: the height of grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
