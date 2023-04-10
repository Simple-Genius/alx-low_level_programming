#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc:the counter
 * @argv: the values
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	int i;
	int j;
	int k;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		k = i * j;
		printf("%d\n", k);
		return (0);
	}
}
