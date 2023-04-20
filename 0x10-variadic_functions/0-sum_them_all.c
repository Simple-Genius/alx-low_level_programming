#include <stdarg.h>

/**
 * sum_them_all - a function that prints the sum of arguments in a function
 *
 *
 *@n: the number of arguments
 *
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
int x, sum = 0;
va_list args;

if (n == 0)
{
return (0);
}

va_start(args,n);

for (int i = 0; i < n; i++)
{
x = va_arg(args, int);
sum += x;
}
va_end(args);

return sum;
}
