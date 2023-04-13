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
	if (b != 0)
		return (malloc(b));
	free(b);
	exit(98);

}
