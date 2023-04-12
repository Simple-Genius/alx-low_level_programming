#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated.
 * @s2: The string to be concatenated.
 *
 * Return: concatenated string or null depending on situation
 */

char *str_concat(char *s1, char *s2)
{
	char *joinedString; 
	int indexA; 
	int indexB = 0; 
	int length = 0; 

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (indexA = 0; s1[indexA] || s2[indexA]; indexA++)
		length++;

	joinedString = malloc(sizeof(char) * length);

	if (joinedString == NULL)
		return (NULL);

	for (indexA = 0; s1[indexA]; indexA++)
		joinedString[indexB++] = s1[indexA];

	for (indexA = 0; s2[indexA]; indexA++)
		joinedString[indexB++] = s2[indexA];

	return (joinedString);
}
