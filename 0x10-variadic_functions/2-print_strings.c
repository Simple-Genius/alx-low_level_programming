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
int i = 0, j = 0;
char *c;

va_start(args, n);


for (i = 0; i < n; i++)
{
c = va_arg(args, char*);

if (separator == NULL && c != NULL)
{
printf("%s", c);
}
else if (separator != NULL && c != NULL)
{
printf("%s%s", c, separator);
}
else if (c == NULL)
{
printf("(nil)");
}
}
va_end(args);
printf("\n");
}
