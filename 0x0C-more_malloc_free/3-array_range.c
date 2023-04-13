#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * array_range - a function that allocates memory for an array, using malloc
 *
 *
 *@min: lower boundary
 *@max: upper boundary
 *
 * Return: Always 0
 */

int *array_range(int min, int max)
{
	int *intArray;
	int sub, i;

	if (min > max)
		return (NULL);

	sub = max - min;

	intArray = malloc((sub + 1) * sizeof(int));

	if (sub == NULL)
		return (NULL);

	for (i = 0; i <= sub; i++)
	{
		intArray[i] = min++;
	}


	return (intArray);
}
