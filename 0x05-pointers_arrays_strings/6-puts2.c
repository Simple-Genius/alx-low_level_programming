#include "main.h"
/**
 * puts2 - a function that prints every other character of a string, starting with the first character
 *
 *
 *@str: String parameter required
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}
	printf("\n");
}
