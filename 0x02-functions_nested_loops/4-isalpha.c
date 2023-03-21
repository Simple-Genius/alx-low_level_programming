#include<stdio.h>
#include <ctype.h>
#include "main.h"
/* main - Entry point
 *
 *  
 * Return: Always 0 (Success)
 */

int _isalpha(int c);

int _isalpha(int c)
{
	if(!isalpha(c))
	{
		return (0);
	}
	return (1);
}
