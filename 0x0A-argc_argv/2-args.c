#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints all arguements it receives
 * @argc: the counter
 * @argv: the values
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
