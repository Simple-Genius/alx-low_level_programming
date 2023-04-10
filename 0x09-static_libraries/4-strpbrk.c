#include "main.h"
#include <string.h>
/**
 * _strpbrk - a function that searches a string
 * for any of a set of bytes
 *
 *
 *@s: The string to search for
 *@accept: The string to be searched through
 *
 * Return: Always 0
 */


char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
