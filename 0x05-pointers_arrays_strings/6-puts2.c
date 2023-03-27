#include "main.h"
#include<stdio.h>
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character
 *
 *@str: String parameter required
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int length = 0, i = 0;

	while (str[length] != '\0')
		length++;

	length -= 1;

	for (; i <= length; i += 2)
		putchar(str[i]);

	putchar('\n');
}
