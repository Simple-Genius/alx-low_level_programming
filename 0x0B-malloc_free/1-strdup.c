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
	char *ptr;
	int i;

	i = strlen(str);
	ptr = malloc(sizeof(char) * (i));
	if (str == NULL)
		return (NULL);


	ptr = strdup(str);
	return (ptr);
}
