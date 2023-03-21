#include<stdio.h>
#include "main.h"
/**
 *print_last_digit - returns last digit of a number
 *
 * @r: the numbe to be operated on
 * Return: Always 0 (Success)
 */

int print_last_digit(int r)
{
	int j;

	if (r < 0)
		j = -1 * (r % 10);
	else
		j = r % 10;

	_putchar((j % 10) + '0');
	return (j % 10);

}
