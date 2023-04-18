#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Function that prints
 * the parameters of the struct
 *
 *@d - The struct parameter
 *
 * Return: Always 0
 */

void print_dog(struct dog *d)
{
	printf("%s\n", d->name);
	printf("%f\n", d->age);
	printf("%s\n", d->owner);
}

