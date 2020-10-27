#include "holberton.h"
/**
 * _strspn - entry point
 *
 * @s: variable
 * @accept: variable
 *
 * Return: c
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	int c = 0;
	int d = 0;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
			{
				c = c + 1;
			}
		}
		if (c != d)
		{
			d = c;
		}
		else
		{
			break;
		}
	}
	return (c);
}
