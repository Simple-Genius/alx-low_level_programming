#include "main.h"
#include <string.h>
/**
 * _strspn - a function that gets the length
 * of a prefix substring.
 *
 *
 *@s: segment string parameter
 *@accept: full string parameter
 *
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
