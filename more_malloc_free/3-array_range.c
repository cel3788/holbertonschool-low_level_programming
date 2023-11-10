#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers containing a range of values
 * @min: lower value
 * @max: higher value
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	unsigned int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		array[i] = min;
	}

	return (array);
}
