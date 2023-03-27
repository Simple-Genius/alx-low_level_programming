#include "main.h"
#include <stdio.h>
/**
 * puts_half - a function that prints half of a string, followed by a new line
 *
 *
 *@str: String parameter
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int length = 0, i, a;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
	{
		a = length / 2;
	}
	else
	{
		a = (length + 1) / 2;
	}
	for (i = a; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
