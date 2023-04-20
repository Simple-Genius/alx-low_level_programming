#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 * followed by a new line
 *
 *
 *@n: the size of the list
 *@separator: the character seperating items in the list
 *
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list a;
int j;
unsigned int i = 0;

va_start(a, n);
for (i = 0; i < n; i++)
{
j = va_arg(a, int);
if (separator != NULL)
	printf("%d", j);
if (i < n - 1 && separator != NULL)
	printf("%s", separator);
}
va_end(a);
printf("\n");
}
