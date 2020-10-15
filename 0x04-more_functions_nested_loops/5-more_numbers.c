#include "holberton.h"
/**
  * more_numbers - this function print more numbers.
  *
  * return: new line
  */
void more_numbers(void)
{
	int ten, number;

	for (ten = 1; ten <= 10; ten++)
	{
		for (number = 10; number <= 24 ; number++)
		{
			if (number > 19)
			{
				_putchar((number / 20) + '0');
			}
			else
			{
			}
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
