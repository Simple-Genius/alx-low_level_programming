#include <stdlib.h>
#include <time.h>

/* main - Entry point
 * 
 * This program is going to determine whether a number is zero, positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive")
	}
	else if (n < 0)
	{
		printf("%d is negative")
	}
	else
	{
		printf("%d is 0")
	}
	return (0);
}
