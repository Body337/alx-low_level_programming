#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d array
 * @grid: pointer to 2d array
 * @height: height of the array
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
