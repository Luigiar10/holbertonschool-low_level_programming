#include "holberton.h"
/**
  * jack_bauer - Entry point
  * variables of data type int
  * Return: Always 0 (Success)
  *
  */
void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar( (hours / 10) + '0');
			_putchar( (hours % 10) + '0');
			_putchar(':');
			_putchar('0' + (minutes / 10) );
			_putchar('0' + (minutes % 10) );
			_putchar('\n');
		}
	}
	return(0);
}
