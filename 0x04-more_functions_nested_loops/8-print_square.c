#include "main.h"

/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

