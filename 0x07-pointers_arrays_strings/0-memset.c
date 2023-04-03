#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory area pointed to by s with the constant byte b
 *
 *
 *@s - the pointer parameter
 *@b - the character parameter
 *@n - the number of bytes
 *
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
    return (memset(s, b, n));
}
