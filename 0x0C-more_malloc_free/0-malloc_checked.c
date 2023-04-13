#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 *
 *
 *@b: the size of the memory to allocate
 *
 * Return: Always 0
 */


void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = malloc(b);
	if (mal == NULL)
		exit(98);

	return (mal);

}
