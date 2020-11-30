#include "holberton.h"
#include <stdlib.h>
/**
* array_range - entry point
*
* @min: arguments
* @max: arguments
*
* Return: pointer
*/
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int x;
	unsigned int z = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = min ; x <= max; x++)
	{
		ptr[z] = x;
		z++;
	}
	return (ptr);
}
