#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - a function that concatenates two strings
 *
 *
 *@dest: one of the string parameters
 *@src: one of the string parameters
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	char *join;
	join = strcat(dest,src);
	return join;
}
