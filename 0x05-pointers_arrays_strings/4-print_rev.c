#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - a function that prints a string in reverse
 *
 *
 *@s: The string to be reversed and printed
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	if (*s == '\0')
       	{
        	return;
    	}
	print_rev(s + 1);
 	putchar(*s);
	putchar('\n');
}
