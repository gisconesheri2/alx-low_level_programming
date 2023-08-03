#include <stdlib.h>
/**
 * free_grid - release memory used by alloc_grid
 * @grid: grid used
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
