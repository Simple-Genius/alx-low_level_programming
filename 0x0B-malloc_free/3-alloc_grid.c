#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: column parameter
 * @height: row parameter
 * Return: pointer to a 2D array or NULL on failure
 */
 
 int **alloc_grid(int width, int height)
{
	int **grid; //twod
	int indexA ; //hgt_index 
	int indexB ; //wid_index

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (indexA = 0; indexA < height; indexA++)
	{
		grid[indexA] = malloc(sizeof(int) * width);

		if (grid[indexA] == NULL)
		{
			for (; indexA >= 0; indexA--)
				free(grid[indexA]);

			free(grid);
			return (NULL);
		}
	}

	for (indexA = 0; indexA < height; indexA++)
	{
		for (indexB = 0; indexB < width; indexB++)
			grid[indexA][indexB] = 0;
	}

	return (grid);
}
