#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct named dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's Owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
