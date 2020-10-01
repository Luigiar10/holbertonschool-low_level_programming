#include "holberton.h"
/**
  * puts_half - string
  * @str: number
  *
  */
void puts_half(char *str)
{
	int a, e, i;

	for (a = 0; str[a] != '\0'; a++)
	{
	}
	if (a % 2 == 0)
	{
		e = a / 2;
	}
	else
	{
		e = (a + 1) / 2;
	}
	for (i = e; i <= (a - 1); i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
