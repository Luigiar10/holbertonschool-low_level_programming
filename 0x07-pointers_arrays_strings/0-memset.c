#include "holberton.h"
/**
 * _memset - entry point
 *
 * @s: pointer
 * @b: varible
 * @n: variable number
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
