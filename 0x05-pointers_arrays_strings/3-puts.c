#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 *
 *
 *@str - the string to be printed
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		p++;
	}
}
