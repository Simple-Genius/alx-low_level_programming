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

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	printf("%s\n", d->name);
	if (d->age == NULL)
	{
		printf("Age: (nil)");
	}
	printf("%f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)")
	}
	printf("%s\n", d->owner);
}

