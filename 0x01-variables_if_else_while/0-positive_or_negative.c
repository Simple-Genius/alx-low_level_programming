#include <stdlib.h>
#include <time.h>

/* main - Entry point
 *
 * This program will determine whether the number is positive , negative or 0	
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative");
	}
	else if (n > 0)
	{
		printf("%d i positive");
	}
	else
	{
		printf("%d is 0");
	}
	return (0);
}
