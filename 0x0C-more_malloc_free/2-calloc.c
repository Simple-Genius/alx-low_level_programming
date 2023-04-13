#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc
 *
 *
 *@nmemb: the number of elements
 *@size: the size
 *
 * Return: Always 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *mal;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mal = malloc(nmemb * size);
	if (mal == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(mal + i) = 0;

	return (mal);
}
