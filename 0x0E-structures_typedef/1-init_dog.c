#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - A function to assign values to struct
 *
 *
 *@d: the struct parameter
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the owner of the dog
 *
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->owner = owner;
	d->name = name;
	d->age = age;
}
