#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 *
 *
 *@s1: string parameter
 *@s2: other string parameter
 *@n: the number of bytes
 *
 * Return: Always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *joinedString;
	int size1, size2;

	if (s1 == "" || s2 == "" || n == 0)
	{
		return (NULL);
	}

	size1 = strlen(s1);
	size2 = strlen(s2);

	if (n >= size2)
	{
		joinedString = malloc(sizeof(char) * ((size1 + size2 + 1)));
		if (joinedString == NULL)
		{
			return (NULL);
		}
		return (joinedString);
	}


	strncat(s1, s2, n);
	putchar(joinedString);

	return (joinedString);
}
