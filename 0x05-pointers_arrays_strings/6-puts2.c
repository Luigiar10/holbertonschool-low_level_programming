#include "holberton.h"
/**
  * puts2 - print numbers
  * @str: variable
  *
  */
void puts2(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		if (num % 2 == 0)
		{
			_putchar(str[num]);
		}
	}

	_putchar('\n');
}
