#include "main.h"
#include<stdio.h>
/**
 * _strlen - a function that returns the length of a string.
 *
 *
 *@s: The string parameter
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	char b[] = *s;
	return (strlen(b));
}