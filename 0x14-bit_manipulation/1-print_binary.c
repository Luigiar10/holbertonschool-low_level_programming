#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - entry point
 *
 * @n: number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int x;
	int z;

	if (n == 0)
	{
		_putchar('0');
	}
	for (z = ((sizeof(unsigned long int) * 8) - 1); z >= 0; z--)
	{
		x = n >> z;
		if (x)
		{
			if (x & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
