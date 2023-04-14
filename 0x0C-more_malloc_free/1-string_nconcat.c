#include "main.h"
#include <stdio.h>
#include <string.h>
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
	unsigned int i = 0, j = 0, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size1 = strlen(s1);
	size2 = strlen(s2);

	if (n >= size2)
	{
		n = size2;
	}

	joinedString = malloc(sizeof(char) * (size1 + n + 1));

	if (joinedString == NULL)
	{
		return (NULL);
	}

	while (i <= size1)
	{
		joinedString[i] = s1[i];
		i++;
	}

	while (j <= n)
	{
		joinedString[j + size1] = s2[j];
		j++;
	}


	return (joinedString);
}
