#include<stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char message[] = "_putchar";
	int i = 0;
	for (i = 0; i < 8; i++)
	{
		putchar(message[i]);
	}
	return (0);
}
