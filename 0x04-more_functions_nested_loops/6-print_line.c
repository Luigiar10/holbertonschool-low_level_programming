#include "holberton.h"
/**
  * print_line - Entry point.
  *
  * @n: number to count
  *
  * Return: Always 0
  *
  */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
