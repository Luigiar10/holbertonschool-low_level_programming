#include "holberton.h"
/**
 * _strchr - entry point
 *
 * @s: variable
 * @c: variable
 *
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (0);
}
