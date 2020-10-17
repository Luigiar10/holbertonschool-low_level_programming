#include "holberton.h"
/**
  * print_diagonal - Entry point.
  *
  * @n: number to count
  *
  * Return: Always 0 (Success)
  *
  */
void print_diagonal(int n)
{
	int dia, diay;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (dia = 0; dia < n; dia++)
		{
			for (diay = 0; diay < dia; diay++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
