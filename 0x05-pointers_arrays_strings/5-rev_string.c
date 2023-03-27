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
	char temp;
    	int i = 0, j = 0;
    	while (s[j] != '\0')
	{
        	j++;
    	}
    	j--;
    	while (i < j)
	{
        	temp = s[i];
        	s[i] = s[j];
        	s[j] = temp;
        	i++;
        	j--;
	}
}
