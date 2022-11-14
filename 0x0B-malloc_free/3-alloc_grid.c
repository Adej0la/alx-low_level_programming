#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2d integer array
 * @width: the width of array
 * @height: the height of array
 *
 * Return: the array
 */
int **alloc_grid(int width, int height)
{
	int **grid, h_index, w_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (h_index = 0; h_index < height; h_index++)
	{
		grid[h_index] =  malloc(sizeof(int) * width);

		if (grid[h_index] == NULL)
		{
			while (h_index >= 0)
			{
				free(grid[h_index]);
				h_index--;
			}
			free(grid);
			return (NULL);
		}
	}

	for (h_index = 0; h_index < height; h_index++)
	{
		w_index = 0;
		while (w_index < width)
		{
			grid[h_index][w_index] = 0;
			w_index++;
		}
	}

	return (grid);
}
