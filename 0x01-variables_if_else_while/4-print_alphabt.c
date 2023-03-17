#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char j, j1, j2;

	j1 = 'e';
	j2 = 'q';

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j != j1 && j != j2)
			putchar(j);
	}
	putchar('\n');

	return (0);
}

