#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - entry point
 *
 * @width: arguments
 * @height: arguments
 *
 * Return: max
 */
int **alloc_grid(int width, int height)
{
	int **max;
	int j, x;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	max = malloc(height * sizeof(int *));

	if (max == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		max[j] = malloc(width * sizeof(int));
		if (max[j] == NULL)
		{
			for (x = 0; x <= j; x++)
			{
				free(max[x]);
			}
			free(max);
			return (NULL);
		}
	}
	return (max);
}
