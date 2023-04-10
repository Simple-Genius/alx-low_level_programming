#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: the counter
 * @argv:the values
 * Return: Always 0
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
	    j = atoi(argv[2]);
		i = atoi(argv[1]);

		k = i * j;
		printf("%d\n", k);
		return (0);
	}
}
