#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the 2d array
 * @grid: grid in 2d
 * @height: height dimension of the grid
 * Description: frees the memory of grid
 * Return: nothing
 *
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
