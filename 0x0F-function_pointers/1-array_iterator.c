#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array
 *
 *
 *@array: The array of integers to execute the functions on
 *@size: The size of the array
 *@action: The function to execute
 *
 * Return: Always 0
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
long unsigned int i = 0;

if (size == 0)
        return;
for (i = 0; i < size; i++)
{
if (action == NULL|| array == NULL)
	return;
action(array[i]);
}
}
