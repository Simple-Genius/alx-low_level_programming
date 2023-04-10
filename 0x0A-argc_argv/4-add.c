#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that adds positive numbers
 * @argc: the counter
 * @argv: the values
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;
	int j;
	int sol = 0;

	while (argc-- > 1)
	{
		for (j = 0; argv[argc][j]; j++)
		{
			if (!(isdigit(argv[argc][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		i = atoi(argv[argc]);
		sol += i;
	}
	printf("%d\n", sol);
	return (0);
}
