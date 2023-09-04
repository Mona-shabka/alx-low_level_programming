#include "main.h"

/**
* free_grid - nction that frees a 2 dimensional grid previously created
*		by your alloc_grid function.
* @grid: input grid.
* @height: height of grid.
* Return: void.
*/

void free_grid(int **grid, int height)
{
	int m = 0;

	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
