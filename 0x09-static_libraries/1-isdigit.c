#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 * @c: An input integer
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	char a = '0';
	int flag = 0;

	for (; a <= '9'; a++)
	{
		if (a == c)
		{
			flag = 1;
			break;
		}
	}

	return (flag);
}

