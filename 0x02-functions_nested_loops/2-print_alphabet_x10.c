#include<stdio.h>
#include "main.h"
/* print_alphabet_x10 - prints the alphabet 10 times
 *
 *  
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void);

void print_alphabet_x10()
{
	int i=0;
	char b;
	while(i < 10)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			putchar(b);
		}
		i++;
	}
}
