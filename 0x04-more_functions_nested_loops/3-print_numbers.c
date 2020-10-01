#include "holberton.h"
/**
  * print_numbers - this function print numbers.
  *
  * Return: new line
  */
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
