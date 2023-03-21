#include<stdio.h>

/* main - Entry point
 *
 *  
 * Return: 0, 1 or -1
 */

int print_sign(int n);

int main(void)
{
       
        return (0);
}

int print_sign(int n)
{
	if(n > 0)
	{
		putchar('+,');
		return (1);
	}
	else if(n < 0)
	{
		putchar("-,");
		return (-1);
	}
	else
	{
		putchar(0);
		return 0;
	}
}
