#include "main.h"
#include "stdio.h"
#include "string.h"
/**
 *_strncat  - a function that concatenates two strings
 *
 *@dest: string parameter for concatenation
 *@src: string parameter for concatenation
 *@n: the number of bytes
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	char *join;

	join = strncat(dest, src, n);
	return (join);

}
