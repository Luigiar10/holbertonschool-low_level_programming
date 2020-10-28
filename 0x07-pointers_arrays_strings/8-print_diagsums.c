#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - this function prints the diagonals
 * @a: it is the matriz.
 * @size: is the size of the matriz.
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
