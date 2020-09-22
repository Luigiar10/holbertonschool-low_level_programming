#include "holberton.h"
/**
 * print_alphabet_x10 - this function prints ten times the alphabet
 */
void print_alphabet_x10(void)
{
	int alphabet
	int ten;

	for (ten = 0; ten <= 9; ten++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
