#include "holberton.h"
/**
  * printf_alphabet - Entry point
  *
  * Return: always 0
  */
void print_alphabet(void)
{
	char ten, alphabet;

	for(ten = 0; ten <= 9; ten++)
	{
		for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
	return(0);
}

