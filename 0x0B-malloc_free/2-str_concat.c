#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * str_concat - a function that concatenates two strings
 * 
 *
 *@s1: string parameter
 *@s2: other string parameter
 * Return: Always 0
 */


char *str_concat(char *s1, char *s2)
{
	char *s3;
	int a, b;
	a = strlen(s1);
	b = strlen(s2);
	s3 = malloc(sizeof(char) * (a + b));
	s3 = strcat(s1,s2);
	return (s3);
}
