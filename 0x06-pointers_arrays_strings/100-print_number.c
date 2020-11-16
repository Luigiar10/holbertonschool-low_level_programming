#include "holberton.h"
/**
 * print_number - entry point
 *
 * @n: print
 */
void print_number(int n)
{
	unsigned int z, y, k, x, t, las, max, num;

	if (n < 0)
	{
		num = -1 * n;
		z = -1 * n;
	}
	else
	{
		num = n;
		z = n;
	}
	for (y = 1 ;  num / 10 > 0 ; y++)
	{
		num = num / 10;
	}
	k = 1;

	for (x = y - 1 ; x > 0 ; x--)
	{
		k = k * 10;
	}
	if (n < 0)
	{
		_putchar('-');
	}
	for (max = y ; max >= 1 ; max--)
	{
		t = z / k;
		if (t >= 10)
		{
			las = t % 10;
			_putchar(las + '0');
		}
		else
		{
			_putchar(t + '0');
		}
		k = k / 10;
	}
}
