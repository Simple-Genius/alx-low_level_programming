#include <stdio.h>
#include <string.h>
#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 *
 *
 *@n: the number parameter
 *
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	double root = sqrt(n);
	if (n < 0)
	{
		return (-1);
	}
	else if (root != (int)root)
	{
		return (-1);
	}
	return (sqrt(n));
}
