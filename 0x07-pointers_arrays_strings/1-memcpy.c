#include "main.h"
#include <string.h>
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * 
 *
 *@src: the source string
 *@dest: the destination string
 *@n the number of bytes
 *
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
