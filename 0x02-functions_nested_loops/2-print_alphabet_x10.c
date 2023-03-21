#include<stdio.h>
#include "main.h"
/* main - Entry point
 *
 *  
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void);

int main(void)
{
 	print_alphabet_x10();      
        return (0);
}
void print_alphabet_x10()
{
	int i=0;
	char b;
	while(i < 10)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			putchar(b)
		}
		i++;
	}
}
