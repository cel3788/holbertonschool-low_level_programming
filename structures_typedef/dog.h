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


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
