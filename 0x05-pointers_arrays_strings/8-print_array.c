#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers
 *
 *
 *@a: pointer to an int parameter
 *@n: int parameter
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
