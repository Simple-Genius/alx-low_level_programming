#include<stdio.h>
#include "main.h"
/**
 * print_sign - function to print the sign of a number
 *
 * @n: number to be checked
 * Return: 0, 1 or -1
 */

int print_sign(int n);

int print_sign(int n)
{
	int c;

	if (n > 0)
	{
		c = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		c = -1;
		_putchar('-');
	}
	else
	{
		c = 0;
		_putchar('0');
	}
	return (c);
}
