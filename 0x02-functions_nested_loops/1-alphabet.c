#include "holberton.h"
/**
  * print_alphabet - entry point
  *
  */
void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
