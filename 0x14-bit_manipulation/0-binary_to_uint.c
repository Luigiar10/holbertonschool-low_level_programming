#include "holberton.h"
#include <stdlib.h>
unsigned int _strlen(const char *);
unsigned int power(unsigned int, unsigned int);

/**
 * binary_to_uint - entry point
 *
 * @b: arguments
 *
 * Return: max
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x, z;
	unsigned int max = 0;

	if (b == NULL)
	{
		return (0);
	}
	x = _strlen(b);
	for (z = 1; z <= x; z++)
	{
		if (b[z - 1] != '0' && b[z - 1] != '1')
			return (0);
		if (b[z - 1] == '1')
			max = max + power(2, (x - z));
	}
	return (max);
}

/**
 * _strlen - entry point
 *
 * @b: arguments
 *
 * Return: x
 */
unsigned int _strlen(const char *b)
{
	int x;

	for (x = 0; b[x]; x++)
	{
	}
	return (x);
}

/**
 * power - entry point
 *
 * @x: arguments
 * @b: arguments
 *
 * Return: pow
 */
unsigned int power(unsigned int x, unsigned int b)
{
	int poder = 1;

	for (; b > 0; b--)
	{
		poder = poder * x;
	}
	return (poder);
}
