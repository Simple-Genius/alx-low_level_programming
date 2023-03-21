#include<stdio.h>
/**
 * print_alphabet - Function to print the alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
