#include "function_pointers.h"
/**
 *int_index - a function that searches for an integer
 *
 *
 *@array: The array of integers which the function will operate on
 *@size: The size of the array
 *@cmp: The pointer to the function
 *
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if(array == NULL)
		return (NULL);
	while (i != size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	i++;
	}
	return (-1);
}
