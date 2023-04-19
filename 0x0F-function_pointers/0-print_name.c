#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - a function that prints a name.
 *
 *
 *@f: The name of the function
 *@name: The name it prints
 *
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
