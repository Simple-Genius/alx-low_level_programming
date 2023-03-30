#include "main.h"
#include<ctype.h>
/**
 * string_toupper - a function that changes all lowercase letters of a string to uppercase
 *
 *
 *@s: The string parameter
 *
 * Return: Always 0
 */
char *string_toupper(char *s)
{
	while(*s != '\0')
	{
		if (isupper(*s) == 0)
		{
			*s = toupper(*s);
		}
		s++;
	}
	return (s);
}
