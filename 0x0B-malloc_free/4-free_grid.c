#include "main.h"

/**
 * free_grid - free's the 2 dimensional arrays of integers
 *
 * @grid: The 2-dimemsional array of integers to be freed
 * @height: The height of grid
 *
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
