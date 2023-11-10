#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - allocates memory for an array
 * @nmemb: elements
 * @size: number of bytes
 * Return: pointer to the allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	array = malloc(size * nmemb);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size * nmemb; i++)
	{
		array[i] = 0;
	}

	return (array);
}
