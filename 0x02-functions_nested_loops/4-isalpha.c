#include<stdio.h>
#include <ctype.h>

/* main - Entry point
 *
 *  
 * Return: Always 0 (Success)
 */

int _isalpha(int c);

int main(void)
{
       
        return (0);
}

int _isalpha(int c)
{
	if(!isalpha(c))
	{
		return (0);
	}
	return (1);
}
