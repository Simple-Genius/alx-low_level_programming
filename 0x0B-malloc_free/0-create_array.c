#include <stdio.h>
#include <stdlib.h>

#include "main.h"
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 *
 *@size: the size parameter
 *@c: the character parameter
 *
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	char *text;
	unsigned int i = 0;

	text = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		text[i] = c;
	}

	return (text);
}
