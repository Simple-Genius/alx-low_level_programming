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
	int **arr;
	int a = 0;
	int b = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		arr[a] = (int *)malloc(sizeof(int) * width);
		if (arr[a] == NULL)
		{
			return (NULL);
		}

	}

	for (a = 0; a < height; a++)
		for (b = 0 b < width; b++)
			arr[a][b] = 0;

	return (arr);
}
