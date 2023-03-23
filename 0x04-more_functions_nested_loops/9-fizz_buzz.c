#include "main.h"
#include <stdio.h>

/**
 * main - Entry piont
 * Return: Always 0
 */
int main(void)
{
	int b = 1;

	for (; b < 100 ; b++)
	{
		if (b % 3 == 0 && b % 5 == 0)
			printf("FizzBuzz ");
		else if (b % 5 == 0)
			printf("Buzz ");
		else if (b % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", b);
	}
	printf("Buzz\n");

	return (0);
}

