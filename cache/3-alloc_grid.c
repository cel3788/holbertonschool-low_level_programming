#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int w = 0;
	int h = 0;
	int **table;

	table = malloc(sizeof(*table) * height);

	if (width <= 0 || height <= 0 || table == 0)
	{
		return (NULL);
	}
	else
	{
		for (h = 0; h < height; h++)
		{
			table[h] = malloc(sizeof(**table) * width);
			if (table[h] == 0)
			{
				while (h--)
					free(table[h]);
				free(table);
				return (NULL);
			}
			for (w = 0; w < width; w++)
			{
				table[h][w] = 0;
			}
		}
	}
	return (table);
}
