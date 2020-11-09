#include "holberton.h"
/**
  * _print_rev_recursion - entry point or prototype
  *
  * @s: String
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
