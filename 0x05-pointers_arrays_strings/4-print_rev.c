#include "holberton.h"
/**
  * print_rev - this function prints a string in reverse.
  * @str: input string.
  *
  */
void print_rev(char *str)
{
	int string, run;

	for (run = 0; str[run] != '\0'; run++)
	{
	}
	for (string = run - 1; string >= 0; string--)
	{
		_putchar(str[string]);
	}

	_putchar('\n');
}
