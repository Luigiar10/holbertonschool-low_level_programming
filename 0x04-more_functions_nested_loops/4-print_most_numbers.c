#include "holberton.h"
/**
  * print_most_numbers - print numbers
  *
  * @num: variable of type int 
  *
  * Return: new line
  */
void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if ( (num != '2') && (num != '4') )
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
