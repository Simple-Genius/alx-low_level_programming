#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 *
 *@dest: pointer parameter
 *@src: pointer parameter
 *
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
		*dest++ = *src++;
	return (temp);
}
