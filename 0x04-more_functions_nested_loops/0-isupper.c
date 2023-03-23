#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	int flag;

	if (isupper(c) > 0)
		flag = 1;
	else
		flag = 0;

	return (flag);

}
