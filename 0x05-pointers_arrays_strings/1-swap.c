#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 *
 *@a: integer to swap
 *@b: integer to swap with
 *
 *
 */
void swap_int(int *a, int *b)
{
	int tempA, tempB;

	tempA = *a;
	tempB = *b;

	*a = tempB;
	*b = tempA;
}
