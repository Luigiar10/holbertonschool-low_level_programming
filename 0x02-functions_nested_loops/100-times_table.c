#include "holberton.h"
/**
* print_times_table - entry point
*
* @n: number
*/
void print_times_table(int n)
{
	int x, z, la;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');

			for (z = 1; z <= n; z++)
			{
				_putchar(',');
				_putchar(' ');

				la = x * z;

				if (la <= 99)
				{
					_putchar(' ');
				}
				if (la <= 9)
				{
					_putchar(' ');
				}
				if (la >= 100)
				{
					_putchar((la / 100) + '0');
					_putchar(((la / 10)) % 10 + '0');
				}
				else if (la <= 99 && la >= 10)
				{
					_putchar((la / 10) + '0');
				}
				_putchar((la % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
