#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reverse_array - a function that reverses an array
 *
 *@a: the array parameter
 *@n: the array size
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;

	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}

}
