#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - a function that prints
 * the sum of the two diagonals
 * of a square matrix of integers
 *
 *
 *@a: the pointer parameter
 *@size: the size parameter
 *
 * Return: Always 0
 */


void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i, j;

	for (i = 0; i < size * size; i += size + 1)
	{
		sum1 += a[i];
	}

	for (j = size - 1; j + size - 1 < size * size; j += size - 1)
	{
		sum2 += a[j];
	}

	printf("%d, %d", sum1, sum2);
	printf("\n");
}
