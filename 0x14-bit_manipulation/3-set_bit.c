#include "holberton.h"

/**
 * set_bit - entry point
 *
 * @n: arguments
 * @index: arguments
 *
 * Return: number.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int srch = 0x01;

	srch <<= index;
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	*n = *n | srch;
	return (1);
}
