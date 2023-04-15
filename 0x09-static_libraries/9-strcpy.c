#include "main.h"
#include<stdio.h>
#include <string.h>
/**
 * _strlen - a function that returns the length of a string.
 *
 *
 *@s: The string parameter
 *
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	char *bab = dest;

	while (*src)
	{
		*dest++ = *src++;
	}

	return (bab);
}
