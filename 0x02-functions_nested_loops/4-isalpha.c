#include "holberton.h"
/**
 * _isalpha - Entry point
 * @c: check
 * Return: 1
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
		return (0);
}
