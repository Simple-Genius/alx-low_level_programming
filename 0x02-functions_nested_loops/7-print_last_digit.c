#include<stdio.h>

/**
 *print_last_digit - returns last digit of a number
 *  
 * @r: the numbe to be operated on
 * Return: Always 0 (Success)
 */

int print_last_digit(int r)
{
	int b = r % 10;

	putchar(r);
	return (r % 10);
}
