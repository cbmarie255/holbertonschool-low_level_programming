#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free a 2 dimensional grid
 *@grid: pointer to pointer of location of the grid
 *@height: row height
 *Return: null or memory allocation
 */
void free_grid(int **grid, int height)
{
	int k = 0;

	if (grid == NULL)
		return;
	while (k < height)
	{
		free((int *)grid[k]);
		k++;
	}
	free(grid);
}
