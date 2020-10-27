#include "holberton.h"
/**
 * _strpbrk - entry point
 *
 * @s: variable
 * @accept: variable
 *
 * Return: Always 0 
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	do {
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
	} while (*s++);
	return (0);
}
