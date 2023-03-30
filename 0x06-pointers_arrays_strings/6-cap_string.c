#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 *
 *
 *@s: string parameter
 *
 * Return: Always 0
 */
char *cap_string(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 || isspace(s[i-1]) || s[i - 1] == '.')
		{
			s[i] = toupper(s[i]);
		}
		i++;
	}
	return (s);
}
