#include "main.h"
#include <stdlib.h>
/**
 * free_grid - funstion that frees a 2 dimensional grid prviously
 * created by your alloc_grid function
 * @grid: 2 dimensional grid 
 * @height: height of the grid
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
