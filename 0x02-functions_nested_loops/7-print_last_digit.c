#include<stdio.h>

/**
 *print_last_digit - returns last digit of a number
 *  
 * @r: the numbe to be operated on
 * Return: Always 0 (Success)
 */

int print_last_digit(int r)
{
	putchar(r % 10);
	return (r % 10);
}
