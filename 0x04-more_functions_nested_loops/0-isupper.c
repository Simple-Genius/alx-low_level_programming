#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	char capital = 'A';
	int flag = 0;

	for (; capital <= 'Z'; capital++)
	{
		if (c == capital)
		{
			flag = 1;
			break;
		}
	}

	return (flag);
}

