#include "function_pointers.h"

/**
 * int_index - index of the first element which doesn't return 0
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function to compare values
 * Return: -1 if no element matches index otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}

		return (-1);
	}
	return (-1);
}
