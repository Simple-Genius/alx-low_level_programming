#include "main.h"
#include <stdlib.h>


/**
 * free_grid - A function that frees a 2D array of ints previously
 * created by your malloc_grid function
 * @grid: an input 2D array to be freed
 * @height: height of grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int num = 0;

	if (grid == NULL)
		return;
	while (num < height)
	{
	    free((int *)grid[num++]);
	}

	free(grid);
}
