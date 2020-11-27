#include "holberton.h"
#include <stdio.h>

/**
 * flip_bits - entry point
 *
 * @n: arguments
 * @m: arguments
 *
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = 0;
	unsigned long int z, l;
	int j;

	z = n ^ m;
	for (j = ((sizeof(unsigned long int) * 8) - 1); j >= 0; j--)
	{
		l = z >> j;
		if (l)
		{
			if (l & 1)
				x = x + 1;
		}
	}
	return (x);
}
