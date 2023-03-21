#include<stdio.h>
#include "main.h"
/**
 * int print_sign(int n) - function to print the sign of a number
 *
 * @n: number to be checked
 * Return: 0, 1 or -1
 */

int print_sign(int n);

int print_sign(int n)
{
	
	if (n > 0)
	{
		putchar('+')
		return (1);
	}
	else if (n < 0)
	{
		putchar('-')
		return (1);
	}
	else
	{
		putchar(0)
		return 0;
	}
}
