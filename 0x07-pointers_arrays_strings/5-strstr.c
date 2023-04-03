#include "main.h"
#include <string.h>
/**
 * _strstr - a function that locates a substring
 *
 *@haystack: The string to be scanned through
 *@needle: The string to search for
 *
 * Return: Always 0
 */



char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

