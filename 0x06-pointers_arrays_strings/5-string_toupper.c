#include "main.h"
#include<ctype.h>
/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase
 *
 *
 *@s: The string parameter
 *
 * Return: Always 0
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (isupper(s[i]) == 0)
		{
			s[i] = toupper(s[i]);
		}
		i++;
	}
	return (s);
}
