#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - a function that copies a string
 *
 *
 *@dest: a string parameter
 *@src: a string parameter
 *@n: the number of bytes
 *
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *join;

	join = strncpy(dest, src, n);
	return (join);
}
