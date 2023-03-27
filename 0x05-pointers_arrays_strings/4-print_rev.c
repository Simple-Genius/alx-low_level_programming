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
	int length = 0;

	while (s[length] != '\0')
		length++;

	while (length != 0)
		putchar(s[--len]);

	putchar('\n');
}
