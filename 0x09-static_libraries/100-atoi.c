#include <stdio.h>

/**
 * _atoi - a function that converts string to integer
 * @s: the string parameter
 * Return: integer value
 */
int _atoi(char *s)
{
	int b = 1;
	unsigned int d = 0;
	char l = 0;

	while (*s)
	{
		if (*s == '-')
		{
			b *= -1;
		}

		if (*s >= '0' && *s <= '9')
		{
			l = 1;
			d = d * 10 + *s - '0';
		}

		else if (l)
			break;
		s++;
	}

	if (b < 0)
	{
		d = (-d);
	}

	return (d);
}
