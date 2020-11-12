#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - entry point
 *
 * @ac: arguments
 * @av: argument
 *
 * Return: max
 */
char *argstostr(int ac, char **av)
{
	int x, z, y, j;
	char *max;

	y = 0;
	j = 0;
	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (z = 0; av[x][z]; z++)
		{
			j++;
		}
	}
	max = malloc((j + ac + 1) * sizeof(char));
	if (max == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (z = 0; av[x][z]; z++)
		{
			max[y] = av[x][z];
			y++;
		}
		max[y] = '\n';
		y++;
	}
	return (max);
}

