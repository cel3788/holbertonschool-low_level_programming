#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure that gives information about a dog
 * @name: pointer to the name
 * @age: age of the dog
 * @owner: pointer to the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
