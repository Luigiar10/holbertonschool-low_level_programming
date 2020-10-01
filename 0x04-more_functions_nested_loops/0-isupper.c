#include "holberton.h"
/**
  * _isupper - check alphabet
  * @c: variable
  * Return: 1
  *
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
