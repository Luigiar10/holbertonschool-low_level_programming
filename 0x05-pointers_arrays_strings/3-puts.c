#include "holberton.h"
/**
  * _puts - entry point
  *
  * @str: input
  *
  *
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
