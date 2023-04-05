#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 *
 *
 *@s: The string paraameter
 *
 * Return: Always 0
 */



void _print_rev_recursion(char *s)
{
	int i,j = strlen(s);

	for (i = 0; i < j; i++)
	{
		putchar(s[j - i - 1]);
	}
}
