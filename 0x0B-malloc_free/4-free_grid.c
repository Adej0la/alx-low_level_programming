#include "main.h"

/**
 * free_grid - frees a 2D array
 * @height: the height of the array
 */
void free_grid(int **grid, int height)
{
	int h_index;

	h_index = 0;
	while (h_index < height)
	{
		free(grid[h_index]);
		h_index++;
	}
	free(grid);
}
