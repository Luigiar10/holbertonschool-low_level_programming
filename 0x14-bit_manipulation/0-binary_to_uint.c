#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>
unsigned int _strlen(const char *b);
unsigned int super_power(unsigned int z, unsigned int x);

/**
 * binary_to_uint - entry point
 *
 * @b: pointer
 *
 * Return: max
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x, z, max = 0;

	if (b == NULL)
	{
		return (0);
	}

	z = _strlen(b);

	for (x = 1; x <= z ; x++)
	{
		if (b[x - 1] != '0' && b[x - 1] != '1')
		{
			return (0);
		}

		if (b[x - 1] == '1')
		{
			max = max + super_power(2, (z - x));
		}
	}

	return (max);
}


/**
 * _strlen - entry point
 *
 * @b: arguments
 *
 * Return: tamaño
 */
unsigned int _strlen(const char *b)
{
	unsigned int x;

	for (x = 0; b[x]; x++)
	{
	}
	return (x);
}

/**
 * super_power - entry point
 *
 * @z: arguments
 *	@x: arguments
 *
 * Return: tamaño
 */
unsigned int super_power(unsigned int z, unsigned int x)
{
	unsigned int x = 1;

	for (; x > 0; x--)
	{
		x = x * z;
	}
	return (x);
}
