#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - entry point 
 *
 * @a: variable
 * @size: variable
 *
 */
void print_diagsums(int *a, int size)
{
	int x;
	int y = 0;
	int z = 0;

	for (x = 0; x <= size * size; x = x + size + 1)
	{
		y = y + a[x];
	}
	for (x = size - 1; x < size * size - 1; x = x + size - 1)
	{
		z = z + a[x];
	}
	printf("%d, %d\n", y, z);
}
