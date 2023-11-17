#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable struct dog
 * @d: pointer to the struct dog
 * @name: pointer to name of the dog
 * @age: age of the dog
 * @owner: pointer to owner of the dog
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
