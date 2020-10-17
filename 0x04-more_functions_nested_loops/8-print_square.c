#include "holberton.h"
/**
  * print_square - entry point
  *
  * @n: provider number
  *
  * Return: Always 0
  *
  */
void print_square(int n)
{
	int ver, hor;

	if (n > 0)
	{
		for (ver = 1; ver <= n; ver++)
		{
			for (hor = 1; hor <= n; hor++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
