#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Function that prints
 * the parameters of the struct
 *
 *@d: The struct parameter
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");

	printf("%s\n", d->name);
	printf("%f\n", d->age);
	printf("%s\n", d->owner);
}

