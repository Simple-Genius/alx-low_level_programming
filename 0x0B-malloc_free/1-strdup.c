#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter
 *
 *
 *@str: pointer to the string parameter
 *
 * Return:the string
 */

char *_strdup(char *str)
{
	char *string;
	char *string1;
	int i = 0;
	int length = 0;

	if (str == NULL)
		return (NULL);

	string1 = str;

	while (*str)
	{
		length++;
		str++;
	}

	str = string1;
	string = malloc(sizeof(char) * (length + 1));
	string1 = string;

	if (string != NULL)
	{
		for (i = 0; i < length; i++)
		{
			string[i] = *str;
			str++;
		}
		string[i] = '\0';
		return (string1);
	}
	else
	{
		return (NULL);
	}

}
