#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings,
 * followed by a new line.
 *
 *
 *@separator: the character separating the strings
 *@n: the number of strings
 *
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned long int i = 0;
char *c;

va_start(args, n);


for (i = 0; i < n; i++)
{
c = va_arg(args, char*);

if (c == NULL)
{
	c = "(nil)";
}

if (separator == NULL)
{
	printf("%s", c);
}
else
{
	printf("%s", c);
if	(i == n - 1)
{
	break;
}
printf("%s", separator);
}
}
printf("\n");
}
