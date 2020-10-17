#include "holberton.h"
/**
  * print_square - Entry point.
  *
  * @size: number to count
  *
  * Return: Always 0 (Success)
  *
  */
void print_square(int size)
{
	int ver, hor;

	if (size <= 0)
	{
		_putchar(10);
		for (hor = 0; hor < size; hor++)
		{
			for (ver = 0; ver < size; ver++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
}
