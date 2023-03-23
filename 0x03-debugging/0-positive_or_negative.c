#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description: This checks whether the number is positive, negative or zero
*
* Return: Always 0 (Success)
*/

int positive_or_negative(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
	printf("%d is negative\n", n);
}
else if (n > 0)
{
	printf("%d is positive\n", n);
}
else
{
	printf("%d is zero\n", n);
}
return (0);
}
