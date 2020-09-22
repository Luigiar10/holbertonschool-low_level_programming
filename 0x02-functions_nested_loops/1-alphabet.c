#include "holberton.h"
/**
  * print_alphabet entry point
  *
  * Return: always 0
  */
void print_alphabet(void)
{
	char alphabet;

	for(alphabet = 'a'; alphabet <= 'z'; alphabet++){
		_putchar(alphabet);
	}
	_putchar('\n');

	return(0);
}
