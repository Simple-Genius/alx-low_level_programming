#include <stdio.h>
#include<string.h>
#include "main.h"

/**
 * rev_string - a function that reverses a string
 * 
 *
 *@s: The string to be reversed
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int length = 0;
	while (*s != '\0')
		length++;
	for (int i = 0; i < length / 2; i++)
       	{
        	char temp = *s[i];
        	*s[i] = *s[length - 1 - i];
        	*s[length - 1 - i] = temp;
    	}
}
