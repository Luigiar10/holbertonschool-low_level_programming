#include "holberton.h"
#include <stdlib.h>
/**
* str_concat - entry point
*
* @s1: argument
* @s2: argument
*
*/
char *str_concat(char *s1, char *s2)
{
	char *max;
	int x, j, z, lenght;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (x = 0; s1[x] != '\0'; x++)
	{
	}
	for (j = 0; s2[j]; j++)
	{
	}

	lenght = (x + j + 1);
	max = malloc(sizeof(char) * lenght);

	if (max == 0)
	{
		return (NULL);
	}

	for (z = 0; z < x; z++)
	{
		max[z] = s1[z];
	}

	for (z = 0; z < j; z++)
	{
		max[z + x] = s2[z];
	}

	max[lenght - 1] = '\0';

	return (max);
}
