#include "dog.h"
/**
 * _strlen - returns the length of a tring
 *@s: string
 * Return: len
 */
int _strlen(char *s)
{
	char *ptr = s;
	int  len = 0;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}
	return (len);
}
/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i++] = '\0';

	return (dest);
}
/**
 * *new_dog - creates new dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name != NULL && owner != NULL)
	{

		d = malloc(sizeof(dog_t));
		if (d == NULL)
		{
			return (NULL);
		}

		d->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}

		d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		d->name = _strcpy(d->name, name);
		d->owner = _strcpy(d->owner, owner);
		d->age = age;
	}
	return (d);
}

