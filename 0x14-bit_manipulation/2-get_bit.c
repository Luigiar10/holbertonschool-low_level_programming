#include "holberton.h"

/**
 * get_bit - entry point
 *
 * @n: arguments
 * @index: arguments
 *
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int srch = 0x01;

	srch <<= index;
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	if ((n & srch))
		return (1);
	else
		return (0);
}
