#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string;
 *             arguments are separated by a new line in the string.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */

char *argstostr(int ac, char **av)
{
	int i, j, index; 
	int k = ac;
	char *string;


	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			k++;
	}

	string = malloc(sizeof(char) * k + 1);

	if (string == NULL)
		return (NULL);

	index = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			string[index++] = av[i][j];

		string[index++] = '\n';
	}

	string[k] = '\0';

	return (string);
}
