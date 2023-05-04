#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int
 *
 *
 *@b: pointer to the integer to be converted
 *
 * Return: Always 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, rem = 0, i = 0, n, j = 0;

	if (b == NULL)
		return (0);

	while (b[j])
	{
		if (b[j] != '1' && b[j] != '0')
		{
			return (0);
		}
		j++;
	}

	n = atoi(b);

	while (n != 0)
	{
		rem = n % 10;
		n /= 10;
		dec += rem * pow(2, i);
		++i;
	}
	printf("\n");
	return (dec);
}
